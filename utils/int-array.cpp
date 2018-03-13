#include <algorithm>

#include "int-array.h"

IntArray::IntArray(size_t size)
    :_size(size), _data(new int [size]) {
    for (int i = 0; i < size; i++) {
        _data[i] = 0;
    }
}

IntArray::IntArray(const IntArray & other)
{
    _size = other._size;
    _data = new int[other._size];
    for (int i = 0; i < _size; i++) {
        _data[i] = other._data[i];
    }
}

IntArray::~IntArray() {
    delete [] _data;
}

IntArray & IntArray::operator=(const IntArray & other) {
    if (this != &other) {
        IntArray(other).swap(*this);
    }

    return *this;
}

void IntArray::swap(IntArray & other) {
    std::swap(_size, other._size);
    std::swap(_data, other._data);
}

int IntArray::get(size_t i) const {
    return _data[i];
}

int & IntArray::get(size_t i) {
    return _data[i];
}

size_t IntArray::size() const { return _size; }

void IntArray::resize(size_t nsize) {
    IntArray t(nsize);

    size_t n = nsize > _size ? _size : nsize;
    for (size_t i = 0; i < n; i++) {
        t._data[i] = _data[i];
    }

    swap(t);
}
