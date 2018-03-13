#include "stddef.h"
#include "int-array-2d.h"

int & IntArray2D::get(size_t i, size_t j) {
    return this->data[i * b + j];
}
