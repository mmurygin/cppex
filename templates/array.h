#pragma once

#include <cstddef>

template <typename T>
class Array
{
public:
    explicit Array(size_t size = 0, const T& value = T())
            : size_(size), data_(new T[size]) {
        for (size_t i = 0; i < size; i++) {
            data_[i] = value;
        }
    }

    Array(const Array & other)
            : size_(other.size()), data_(new T[other.size()]) {
        for (size_t i = 0; i < other.size(); i++) {
            data_[i] = other.data_[i];
        }
    }

    ~Array() {
        delete [] data_;
    }

    Array &operator=(Array const & other) {
        if (this == &other)
        {
            return *this;
        }

        delete [] data_;

        size_ = other.size();
        data_ = new T[size_];

        for (size_t i = 0; i < size_; i++)
        {
            data_[i] = other.data_[i];
        }

        return *this;
    }

    size_t size() const {
        return size_;
    }

    T& operator[](size_t index) {
        return data_[index];
    }

    const T & operator[](size_t index) const {
        return data_[index];
    }
private:
    T * data_;
    size_t size_;
};
