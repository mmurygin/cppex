#pragma once

#include "visitor.h"
#include "number.h"
#include "binary-operation.h"

struct PrintVisitor : Visitor {
    void visitNumber(Number const * number);
    void visitBinaryOperation(BinaryOperation const *operation);
};
