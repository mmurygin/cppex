#pragma once

#include <cstddef>

template <typename T>
class Array
{
public:
    explicit Array(size_t size = 0, const T& value = T());
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.
    //
    Array(const Array &);
    //   конструктор копирования, который создает
    //   копию параметра. Считайте, что для типа
    //   T определен оператор присваивания.
    //
    ~Array() {
        delete [] T;
    }
    //   деструктор, если он вам необходим.
    //
    Array& operator=(Array other);
    //   оператор присваивания.
    //
    size_t size() const;
    //   возвращает размер массива (количество
    //                              элементов).
    //
    T& operator[](size_t);
    const T& operator[](size_t) const;
    //   две версии оператора доступа по индексу.
private:
    T * data_;
    size_t size_;
};
