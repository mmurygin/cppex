#include "number.h"

Number::Number(double value) : value_(value) {}

double Number::evaluate() const {
    return value_;
}

void Number::visit(Visitor * visitor) const {
    visitor->visitNumber(this);
}

double Number::getValue() const {
    return value_;
}
