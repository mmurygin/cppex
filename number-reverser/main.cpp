#include <iostream>
using namespace std;

void printReversedNumber() {
    unsigned i = 0;
    cin >> i;

    if(i != 0) {
        printReversedNumber();
        cout << i << ' ';
    }
}

int main() {
    printReversedNumber();

    return 0;
}
