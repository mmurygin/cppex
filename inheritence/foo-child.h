#pragma once

#include "foo.h"

struct FooChild : Foo {
    explicit FooChild(const char *msg);
};
