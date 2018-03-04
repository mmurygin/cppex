#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b) {
    if (a == 0) return b;
    if (b == 0) return a;

    return gcd(b, a % b);
}

int main() {
    cout << "Input a, b:" << endl;
    unsigned a,b;
    cin >> a >> b;

    cout << "result: " << gcd(a, b) << endl;

    return 0;
}
