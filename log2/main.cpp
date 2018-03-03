#include <iostream>
using namespace std;

int log2(int n) {
    const int BASE = 2;

    int logResult = 0;
    int intermideateResult = 1;

    while(intermideateResult < n) {
        intermideateResult = intermideateResult * BASE;
        logResult++;
    }

    if(intermideateResult > n) {
        logResult--;
    }

    return logResult;
}

int main() {
    int iterations = 0;
    cin >> iterations;

    int n = 0;
    while(iterations--) {
        cin >> n;
        cout << log2(n) << endl;
    }

    return 0;
}
