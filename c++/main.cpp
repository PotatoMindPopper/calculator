#include <iostream>
#include <string>

int factorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int power(int base, int exponent) {
    if (exponent <= 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int calculate(std::string input) {
    int result = 0;
    int number = 0;
    char operation = '+';

    for (size_t i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c >= '0' && c <= '9') {
            number = number * 10 + (c - '0');
        } else {
            if (operation == '+') {
                result += number;
            } else if (operation == '-') {
                result -= number;
            } else if (operation == '*') {
                result *= number;
            } else if (operation == '/') {
                result /= number;
            } else if (operation == '!') {
                result = factorial(number);
            } else if (operation == '^') {
                result = power(result, number);
            } else if (operation == '=') {
                return result;
            } else if (operation == '(') {
                int j = i;
                int count = 1;
                while (count > 0) {
                    j++;
                    if (input[j] == '(') {
                        count++;
                    } else if (input[j] == ')') {
                        count--;
                    }
                }
                std::string sub = input.substr(i + 1, j - i - 1);
                number = calculate(sub);
                i = j;
            } else if (operation == ')') {
                return result;
            } else {
                std::cout << "error" << std::endl;
                return 0;
            }
            operation = c;
            number = 0;
        }
    }

    if (operation == '+') {
        result += number;
    } else if (operation == '-') {
        result -= number;
    } else if (operation == '*') {
        result *= number;
    } else if (operation == '/') {
        result /= number;
    } else if (operation == '!') {
        result = factorial(number);
    } else if (operation == '^') {
        result = power(result, number);
    } else if (operation == '=') {
        return result;
    } else if (operation == '(') {
        int j = input.length() - 1;
        int count = 1;
        while (count > 0) {
            j--;
            if (input[j] == ')') {
                count++;
            } else if (input[j] == '(') {
                count--;
            }
        }
        std::string sub = input.substr(j + 1, input.length() - j - 2);
        number = calculate(sub);
        result = number;
    } else if (operation == ')') {
        return result;
    } else {
        std::cout << "error" << std::endl;
        return 0;
    }

    return result;
}

int main() {
    std::cout << "login" << std::endl;

    std::string input = "";

    while (input != "exit") {
        std::cout << ">> ";
        std::cin >> input;
        int result = calculate(input);
        std::cout << result << std::endl;
    }

    std::cout << "logout" << std::endl;
    return 0;
}