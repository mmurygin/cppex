#pragma once

struct IVisitor;

struct Expression {
    virtual double evaluate() const = 0;
    virtual void visit(IVisitor * visitor) const = 0;
    virtual ~Expression() {}
};
