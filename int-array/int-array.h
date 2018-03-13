#pragma once

#include "stddef.h"

struct IntArray {
    explicit IntArray(size_t size);
    IntArray(IntArray const & a);
    ~IntArray();
    IntArray & operator=(const IntArray & other);
    void swap(IntArray & a);

private:
    size_t _size;
    int * _data;
};
