#pragma once

#include "expression.h"
#include "visitor.h"

struct BinaryOperation : IExpression {
    BinaryOperation(IExpression const * left, char operand, IExpression const * right);
    ~BinaryOperation();
    double evaluate() const;

    IExpression const *get_left() const;
    IExpression const *get_right() const;
    char get_op() const;

    void visit(IVisitor *visitor) const;

  private:
    IExpression const * left_;
    IExpression const * right_;
    char operand_;
};
