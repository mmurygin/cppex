#pragma once

#include "stddef.h"

struct IntArray {
    explicit IntArray(size_t size);
    IntArray(IntArray const & a);
    ~IntArray();
    IntArray & operator=(const IntArray & other);
    void swap(IntArray & a);
    size_t size() const;
    int get(size_t i) const;
    int & get(size_t);
    void resize(size_t nsize);

private:
    size_t _size;
    int * _data;
};
