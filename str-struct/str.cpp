#include <cstring>
#include <iostream>
#include "str.h"

String::String(const char * str)
{
    this->size = strlen(str);
    this->str = new char[this->size + 1];
    strcpy(this->str, str);
}

String::String(size_t n, char c)
    : size(n)
{
    this->str = new char[n + 1];
    for (unsigned i = 0; i < n; i++)
    {
        this->str[i] = c;
    }

    this->str[n] = '\0';
}

String::~String()
{
    delete [] this->str;
}

const void String::print() {
    std::cout << "Length: " << this->size << ", Content: "
        << this->str << std::endl;
}

void String::append(String &other) {
    size_t newSize = this->size + other.size;
    char *newStr = new char[newSize + 1];

    strcpy(newStr, this->str);
    strcpy(newStr + this->size, other.str);

    delete [] this->str;
    this->size = newSize;
    this->str = newStr;
}
