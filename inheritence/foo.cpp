#include <iostream>
#include "foo.h"

void Foo::say() const {
    std::cout << "Foo says: " << msg << std::endl;
}

Foo::Foo(const char *msg)
    : msg(msg) {
    std::cout << "foo constructor" << std::endl;
}
