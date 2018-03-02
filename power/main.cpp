#include <iostream>

using namespace std;


int power(int x, unsigned p) {
    int result = 1;
    while(p > 0) {
        result *= x;
        p--;
    }

    return result;
}

int main() {
    int x;
    unsigned p;
    cout << "Please enter variable and power:" << endl;
    cin >> x >> p;

    int result = power(x, p);
    cout << x << " ^ " << p << " = " << result << endl;
}
