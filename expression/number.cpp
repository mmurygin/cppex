#include "number.h"

Number::Number(double value) : value_(value) {}

double Number::evaluate() const {
    return value_;
}
