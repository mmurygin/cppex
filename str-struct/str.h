#pragma once

#include <cstddef> // size_t

struct String {
    explicit String(const char *str = "");

    String(size_t n, char c);
    String(const String & other);
    String & operator=(const String &other);
    String operator[] (int index) const;

    ~String();

    void print() const;

    void append(String &other);

    size_t size;
    char *str;
};
