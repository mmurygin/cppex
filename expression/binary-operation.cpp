#include "binary-operation.h"

BinaryOperation::BinaryOperation(Expression const * left, char operand, Expression const * right)
    : left_(left), operand_(operand), right_(right) { }


BinaryOperation::~BinaryOperation() {
    delete left_;
    delete right_;
}

double BinaryOperation::evaluate() const {
    switch (operand_) {
        case '+':
            return left_->evaluate() + right_->evaluate();
        case '-':
            return left_->evaluate() - right_->evaluate();
        case '*':
            return left_->evaluate() * right_->evaluate();
        case '/':
            return left_->evaluate() / right_->evaluate();
        default:
            return 0.0;
    }
}
