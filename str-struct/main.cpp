#include "str.h"

int main() {
    String str = String("Hello world");
    str.print();

    String str2 = String(5, 'h');
    str2.print();

    str.append(str2);
    str.print();

    String str3 = String(str2);
    str3.print();

    String const hello("hello");
    String const hell = hello[0][4];
    hell.print();
    String const ell = hello[1][4];
    ell.print();

    return 0;
}
