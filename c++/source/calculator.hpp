#ifndef __CALCULATOR_HPP__
#define __CALCULATOR_HPP__

#include <stack>
#include <string>
#include <vector>

class Calculator {
  public:
    Calculator();
    ~Calculator();

    // Receives a string and returns the result of the calculation

  private:

    // Does the actual calculation

    std::stack<double> m_stack{};
    std::stack<char> m_operator{};
    std::vector<double> m_history{};
    double m_result{0.0};
};

#endif // __CALCULATOR_HPP__