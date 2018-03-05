#include <iostream>
using namespace std;

unsigned strlen(const char *str) {
    unsigned len = 0;

    while(*str) {
        len++;
        str++;
    }

    return len;
}

int main() {
    char str[] = "len4";

    cout << strlen(str) << endl;

    return 0;
}
