#include <iostream>
using namespace std;

#define MAX(a, b, c)                                                 \
    {                                                                \
        int a_initial = a;                                           \
        int b_initial = b;                                           \
        (c) = (a_initial) > (b_initial) ? (a_initial) : (b_initial); \
    }

int main() {
    int a = 10;
    int b = 20;
    int c = 0;
    MAX(a++, b, c);
    cout << c << endl;
    MAX(a += b, b, c);
    cout << c << endl;

    return 0;
}
