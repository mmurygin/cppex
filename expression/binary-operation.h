#pragma once

#include "expression.h"
#include "visitor.h"

struct BinaryOperation : Expression {
    BinaryOperation(Expression const * left, char operand, Expression const * right);
    ~BinaryOperation();
    double evaluate() const;

    Expression const *get_left() const;
    Expression const *get_right() const;
    char get_op() const;

    void visit(IVisitor *visitor) const;

  private:
    Expression const * left_;
    Expression const * right_;
    char operand_;
};
