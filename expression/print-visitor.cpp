#include <iostream>
#include "print-visitor.h"

void PrintVisitor::visitNumber(Number const * number)
{
    std::cout << number->getValue();
}

void PrintVisitor::visitBinaryOperation(BinaryOperation const *bop)
{
    std::cout << "( ";
    bop->get_left()->visit(this);
    std::cout << " )";
    std::cout << bop->get_op();
    std::cout << "( ";
    bop->get_right()->visit(this);
    std::cout << " )";
}
