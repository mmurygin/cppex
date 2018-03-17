#include "binary-operation.h"

BinaryOperation::BinaryOperation(IExpression const * left, char operand, IExpression const * right)
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

IExpression const * BinaryOperation::get_left() const { return left_; }
IExpression const * BinaryOperation::get_right() const { return right_; }
char BinaryOperation::get_op() const { return operand_; }

void BinaryOperation::visit(IVisitor *visitor) const { visitor->visitBinaryOperation(this); }
