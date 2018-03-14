#include <iostream>
#include "foo-child.h"

FooChild::FooChild(const char * msg)
    : Foo(msg) {
    std::cout << "foo child" << std::endl;
}
