#include "array.h"

template <typename T>
Array<T>::Array<T>(size_t size, const T & value)
        : size_(size), data_(new T[size]) {
    for (size_t i = 0; i < size; i++) {
        data_[i] = value;
    }
}

template <typename T>
Array<T>::Array<T>(const Array<T> & other)
        : size_(other.size()), data_(new T[other.size()]) {
    for (size_t i = 0; i < other.size(); i++) {
        data_[i] = other[i];
    }
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> & other) {
    if (this == &other) {
        return *this;
    }

    delete data_;

    size_ = other.size();
    data_ = new T[size_];

    for (size_t i = 0; i < size_; i++) {
        data_[i] = other[i];
    }

    return *this;
}

template <typename T>
size_t Array<T>::size() const {
    return size_;
}

template <typename T>
T & Array<T>::operator[](size_t index) {
    return data_[index];
}

template <typename T>
const T &Array<T>::operator[](size_t index) const {
    return data_[index];
}
