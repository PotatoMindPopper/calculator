#include <iostream>
#include <string>
#include <stack>
#include <vector>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

std::vector<double> factorial_cache = {1};

bool expression_finished(std::stack<double> values, std::stack<char> ops) {
    return values.size() == 1 && ops.empty();
}

double factorial(double n) {
    // if (n <= 0) {
    //     return 1;
    // } else {
    //     return n * factorial(n - 1);
    // }

    // double result = 1;
    // for (int i = 1; i <= n; i++) {
    //     result *= i;
    // }
    // return result;

    if (n < 0) {
        return NAN;
    }
    if (n == 0) {
        return 1;
    }
    if (n < factorial_cache.size()) {
        return factorial_cache[n];
    }
    double result = factorial_cache[factorial_cache.size() - 1];
    for (int i = factorial_cache.size(); i <= n; i++) {
        try {
            result *= i;
        } catch (std::exception& e) {
            std::cout << "Factorial overflow" << std::endl;
            std::cout << "Stopping at " << i - 1 << "! = " << result << std::endl;
            std::cout << "Error: " << e.what() << std::endl;
            return NAN;
        }
        factorial_cache.push_back(result);
    }
    return result;
}

double evaluate(std::stack<double>& values, std::stack<char>& ops) {
    if (values.size() < 1 || ops.empty()) {
        std::cout << "Not enough values or operators" << std::endl;
        return NAN;
    } else if (values.size() == 1 && ops.empty()) {
        return values.top();
    }

    double result = 0;
    double b = values.top();
    values.pop();

    double a = 0;
    if (!values.empty()) {
        a = values.top();
        values.pop();
    }

    char op = ops.top();
    ops.pop();

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                std::cout << "Division by zero" << std::endl;
                result = NAN;
            } else {
                result = a / b;
            }
            break;
        case '^':
            result = pow(a, b);
            break;
        case '!':
            // result = tgamma(a + 1);
            result = factorial(b);
            break;
        case 'r':
            // result = a * (180 / 3.14159265358979323846);
            result = b * (180 / M_PI);
            break;
        case 'd':
            // result = a * (3.14159265358979323846 / 180);
            result = b * (M_PI / 180);
            break;
        case 's':
            result = sqrt(b);
            break;
        case 'h':
            result = sin(b);
            break;
        case 'c':
            result = cos(b);
            break;
        case 'g':
            result = 1 / tan(b);
            break;
        case 't':
            result = tan(b);
            break;
        case 'a':
            result = abs(b);
            break;
        case 'q':
            result = atan(b);
            break;
        case 'b':
            result = acos(b);
            break;
        case 'u':
            result = asin(b);
            break;
        case 'l':
            result = log(b);
            break;
        case 'n':
            result = log10(b);
            break;
        default:
            std::cout << "Unknown operator: " << op << std::endl;
            result = NAN;
    }

    values.push(result);
    return result;
}

double calculate(std::string expression) {
    std::stack<double> values;
    std::stack<char> ops;
    double num = 0;
    bool num_started = false;
    // bool times_after_bracket = false;

    if (expression.empty()) {
        return NAN;
    }

    for (char c : expression) {
        if (c == ' ') {
            continue;
        }

        if (isdigit(c) || c == '.') {
            num_started = true;
            num = num * 10 + (c - '0');
        } else {
            if (num_started) {
                values.push(num);
                num = 0;
                num_started = false;
            }

            if (c == '(') {
                if (values.size() == 1 && ops.empty()) {
                    ops.push('*');
                }
                // if (times_after_bracket) {
                //     ops.push('*');
                //     times_after_bracket = false;
                // }
                ops.push(c);
            } else if (c == ')') {
                while (!ops.empty() && ops.top() != '(') {
                    evaluate(values, ops);
                }
                if (ops.empty()) {
                    return NAN;
                }
                // times_after_bracket = true;
                ops.pop();
            } else if (c == '+' || c == '-') {
                while (!ops.empty() && ops.top() != '(') {
                    evaluate(values, ops);
                }
                ops.push(c);
            } else if (c == '*' || c == '/') {
                while (!ops.empty() && (ops.top() == '*' || ops.top() == '/' || ops.top() == '^' || ops.top() == 's' || ops.top() == 'c' || ops.top() == 't' || ops.top() == 'a' || ops.top() == 'l')) {
                    evaluate(values, ops);
                }
                ops.push(c);
            } else if (c == '^') {
                ops.push(c);
            } else if (c == '!') {
                ops.push(c);
            } else if (c == 'i') {
                if (expression.substr(expression.find(c), 3) == "inf") {
                    values.push(INFINITY);
                } else {
                    return NAN;
                }
            } else if (c == 'r') {
                if (expression.substr(expression.find(c), 3) == "rad") {
                    ops.push('r');
                } else {
                    return NAN;
                }
            } else if (c == 'd') {
                if (expression.substr(expression.find(c), 3) == "deg") {
                    ops.push('d');
                } else {
                    return NAN;
                }
            } else if (c == 's') {
                if (expression.substr(expression.find(c), 4) == "sqrt") {
                    ops.push('s');
                } else if (expression.substr(expression.find(c), 3) == "sin") {
                    ops.push('h');
                } else {
                    ops.push(c);
                }
            } else if (c == 'c') {
                if (expression.substr(expression.find(c), 3) == "cos") {
                    ops.push('c');
                } else if (expression.substr(expression.find(c), 3) == "ctg") {
                    ops.push('g');
                } else {
                    return NAN;
                }
            } else if (c == 't') {
                if (expression.substr(expression.find(c), 3) == "tan") {
                    ops.push('t');
                } else {
                    return NAN;
                }
            } else if (c == 'a') {
                if (expression.substr(expression.find(c), 3) == "abs") {
                    ops.push('a');
                } else if (expression.substr(expression.find(c), 4) == "atan") {
                    ops.push('q');
                } else if (expression.substr(expression.find(c), 4) == "acos") {
                    ops.push('b');
                } else if (expression.substr(expression.find(c), 4) == "asin") {
                    ops.push('u');
                } else {
                    return NAN;
                }
            } else if (c == 'l') {
                if (expression.substr(expression.find(c), 3) == "log") {
                    ops.push('l');
                } else if (expression.substr(expression.find(c), 3) == "ln") {
                    ops.push('n');
                } else {
                    return NAN;
                }
            } else if (c == 'e') {
                values.push(2.71828182845904523536);
            } else if (c == 'p') {
                if (expression.substr(expression.find(c), 3) == "pi") {
                    // values.push(3.14159265358979323846);
                    values.push(M_PI);
                } else {
                    return NAN;
                }
            } else if (c == 'n') {
                values.push(-1);
            } else if (c == 'x') {
                values.push(0);
            } else if (c == 'y') {
                values.push(1);
            } else if (c == 'z') {
                values.push(2);
            } else {
                return NAN;
            }
        }
    }

    if (num_started) {
        values.push(num);
    }

    while (!ops.empty()) {
        if (ops.top() == '(') {
            return NAN;
        }
        evaluate(values, ops);
    }

    if (!expression_finished(values, ops)) {
        return NAN;
    }

    return values.top();
}

void calculator() {
    std::string input;

    while (true) {
        std::cout << "Enter an expression (or type 'end' to quit): ";
        std::cin >> input;

        if (input == "end") {
            break;
        }

        double result = calculate(input);
        if (std::isnan(result)) {
            std::cout << "Invalid input. Try again." << std::endl;
        } else {
            std::cout << "Result: " << result << std::endl;
        }
    }
}

double not_interactive_calculator(std::string input, bool test = false) {
    double result = calculate(input);
    if (!test) {
        if (std::isnan(result)) {
            std::cout << "Invalid input. Try again." << std::endl;
        } else {
            std::cout << "Result: " << result << std::endl;
        }
    }
    return result;
}

bool test_calculator() {
    // create test cases (create some type of dictionary to store test cases and expected results)
    // sent the test cases to the std::string input of the not_interactive_calculator function
    // compare the result to the expected result and print out the result
    // return true if all tests passed, false otherwise

    struct test_case {
        std::string input;
        double expected_result;
    };

    std::vector<test_case> test_cases = {
        {"", NAN}, {"2+2", 4}, {"2*3", 6}, {"10/2", 5}, {"2^3", 8}, 
        {"(2+3)*4", 20}, {"2*(3+4)", 14}, {"1+2*3", 7}, {"1+2*3-4/2", 6},
        {"sin(0)", 0}, {"cos(0)", 1}, {"tan(0)", 0}, {"sqrt(4)", 2}, 
        {"log(10)", 2.30259}, {"log10(100)", 2}, {"1.5+2.5", 4}, 
        {"2^3.5", 11.3137}, {"1.1*2.2+3.3", 5.83}, {"-2", -2}, {"-2*3", -6},
        {"(-2)*3", -6}, {"2*-3", -6}, {"-2^3", -8}, {"(-2)^3", -8}, {"3!", 6},
        {"0!", 1}, {"-3!", NAN}, {"r(3.14159)", 180}, {"d(180)", 3.14159}, 
        {"s(16)", 4}, {"h(0)", 0}, {"c(0)", 1}, {"g(0)", NAN}, {"t(0)", 0},
        {"a(-5)", 5}, {"q(1)", 0.785398}, {"b(0)", 1.5708}, {"u(0)", 0},
        {"l(2.71828)", 1}, {"n(100)", 2}, {"5(2+3)", 25}, {"(2+3)5", 25},
        {"(2+3)(4+5)", 45}, {"(2+3)(4+5)(6+7)", 630}, 
    };

    int failed_tests = 0;
    bool all_tests_passed = true;
    for (test_case test : test_cases) {
        double result = not_interactive_calculator(test.input, true);
        if (result != test.expected_result) {
            std::cout << "Test failed. Expected result for " << test.input << " is " << test.expected_result << ", but got " << result << std::endl;
            failed_tests++;
            all_tests_passed = false;
        }
    }

    if (all_tests_passed)
        std::cout << "All tests passed." << std::endl;
    else
        std::cout << failed_tests << " tests failed out of " << test_cases.size() << std::endl;
    return all_tests_passed;
}

int main(int argc, char* argv[]) {
    if (argc == 1) {
        calculator();
    } else if (argc == 2) {
        if (std::string(argv[1]) == "test") {
            test_calculator();
            return 0;
        }
        not_interactive_calculator(argv[1]);
    } else {
        std::cout << "Invalid number of arguments." << std::endl;
        std::cout << "Usage: " << argv[0] << " [test]" << std::endl;
    }
    return 0;
}
