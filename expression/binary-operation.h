#pragma once

#include "expression.h"

struct BinaryOperation : Expression {
    BinaryOperation(Expression const * left, char operand, Expression const * right);
    ~BinaryOperation();
    double evaluate() const;
private:
    Expression const * left_;
    Expression const * right_;
    char operand_;
};
