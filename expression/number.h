#pragma once

#include "expression.h"

struct Number :Expression {
    explicit Number(double value);
    double evaluate() const;
private:
    double value_;
};
