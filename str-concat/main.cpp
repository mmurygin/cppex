#include <iostream>
using namespace std;

void strcat(char *to, const char *from) {
    while(*to) {
        to++;
    }

    while(*from) {
        *to = *from;
        to++;
        from++;
    }

    *to = '\0';
}

int main() {
    cout << "Enter a strFrom and strTo: " << endl;
    char strFrom[255];
    cin >> strFrom;

    char strTo[511];
    cin >> strTo;

    strcat(strTo, strFrom);

    cout << "Result: " << strTo << endl;

    return 0;
}
