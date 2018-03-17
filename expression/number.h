#pragma once

#include "expression.h"
#include "visitor.h"

struct Number : IExpression {
    explicit Number(double value);

    double evaluate() const;

    void visit(IVisitor * visit) const;

    double getValue() const;

private:
    double value_;
};
