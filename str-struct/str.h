#pragma once

#include <cstddef>

struct String {
    String(const char *str = "");

    String(size_t n, char c);
    String(const String & other);

    struct Proxy
    {
        Proxy(const char *str, int cut_from_index);

        Proxy(const Proxy &other);

        ~Proxy();

        String operator[](int index) const;
        char * str;
        size_t size;
        int cut_from_index;
    };

    String & operator=(const String &other);
    Proxy operator[] (int index) const;

    ~String();

    void print() const;

    void append(String &other);

    size_t size;
    char *str;
};
