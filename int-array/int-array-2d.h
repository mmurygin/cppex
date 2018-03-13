#pragma once

#include "stddef.h"

struct IntArray2D {
    int & get (size_t i, size_t j);

    size_t a;
    size_t b;
    int * data;
};
