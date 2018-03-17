#pragma once

struct Number;
struct BinaryOperation;

struct IVisitor
{
    virtual void visitNumber(Number const *number) = 0;
    virtual void visitBinaryOperation(BinaryOperation const *operation) = 0;
    virtual ~IVisitor() {}
};
