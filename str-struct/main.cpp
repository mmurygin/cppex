#include "str.h"

int main() {
    String str = String("Hello world");
    str.print();

    String str2 = String(5, 'h');
    str2.print();

    str.append(str2);
    str.print();

    return 0;
}
