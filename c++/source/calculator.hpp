/**
 * @file calculator.hpp
 * @author PotatoMindPopper (PotatoMindPopper@github)
 * @brief Definition of the Calculator class
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 * @details This header file defines the Calculator class, which can evaluate
 *          arithmetic expressions containing basic arithmetic operators, 
 *          parentheses, and some common mathematical functions.
 * 
 */

#ifndef __CALCULATOR_HPP__
#define __CALCULATOR_HPP__

#include <stack>
#include <string>
#include <vector>
#include "data.hpp"

/**
 * @brief The Calculator class
 * 
 * @details This class can evaluate arithmetic expressions containing basic 
 *          arithmetic operators, parentheses, and some common mathematical 
 *          functions. It uses the shunting-yard algorithm to convert infix 
 *          notation to postfix notation, and then evaluates the postfix 
 *          expression using a stack-based approach.
 */
class Calculator {
  public:
    /**
     * @brief Constructs a new Calculator object.
     * 
     * @details Initializes the internal state of the object.
     */
    Calculator();

    /**
     * @brief Destroys the Calculator object.
     */
    ~Calculator();

    /**
     * @brief Evaluates an arithmetic expression and returns the result.
     * 
     * @details This function takes an arithmetic expression in string format 
     *          and evaluates it using the shunting-yard algorithm and a 
     *          stack-based approach. It returns the result of the calculation 
     *          as a double.
     * 
     * @param input The arithmetic expression to evaluate.
     * @return The result of the calculation.
     */
    double calculate(const std::string& input) const;

  private:

    // Functions
    // Does the actual calculation

    // Variables
    // Stores the operators and their precedence
    std::vector<OperatorInfo> operators = {
      {ADD, 1},
      {SUB, 1},
      {MUL, 2},
      {DIV, 2},
      {MOD, 2},
      {POW, 3},
      {SQRT, 3},
      {SIN, 3},
      {COS, 3},
      {TAN, 3},
      {LOG, 3},
      {LN, 3},
      {FACT, 3},
      {NONE, 0}
    };

    // Stores the operands
    std::stack<Operand> operands;

    // Stores the operators
    std::stack<Operator> operators;

    // Stores the tokens
    std::vector<TokenInfo> tokens;

    // Stores the input
    std::string input;

    // Stores the result
    double result;
};

#endif // __CALCULATOR_HPP__