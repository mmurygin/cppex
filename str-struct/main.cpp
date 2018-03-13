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

    String str4 = String();
    str4 = str;
    str4.print();

    return 0;
}
