/**
 * @file data.hpp
 * @author PotatoMindPopper (PotatoMindPopper@github)
 * @brief 
 * @details 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __DATA_HPP__
#define __DATA_HPP__

/**
 * @brief The Operator enum
 * 
 * @details 
 */
typedef enum {
  ADD,
  SUB,
  MUL,
  DIV,
  MOD,
  POW,
  SQRT,
  SIN,
  COS,
  TAN,
  LOG,
  LN,
  FACT,
  NONE
} Operator;

/**
 * @brief The Token enum
 * 
 * @details 
 */
typedef enum {
  NUMBER,
  OPERATOR,
  LEFT_PARENTHESIS,
  RIGHT_PARENTHESIS,
  ABSOLUTE,
  UNKNOWN
} Token;

/**
 * @brief The TokenInfo struct
 * 
 * @details 
 */
typedef struct {
  Token type;
  double value;
  Operator op;
} TokenInfo;

/**
 * @brief The Operand struct
 * 
 * @details 
 */
typedef struct {
  double value;
  Operator op;
} Operand;

/**
 * @brief The OperatorInfo struct
 * 
 * @details 
 */
typedef struct {
  Operator op;
  int precedence;
} OperatorInfo;

#endif  // __DATA_HPP__