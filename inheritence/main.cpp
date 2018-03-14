#include "foo.h"
#include "foo-child.h"

using namespace std;

void foo_says(const Foo &foo) {
    foo.say();
}

Foo * get_foo(const char * msg) {
    return new FooChild(msg);
}

int main() {
    Foo * foo = get_foo("this is message");
    foo_says(*foo);

    delete foo;

    return 0;
}
