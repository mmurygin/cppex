#include <iostream>
using namespace std;

int main() {
    int iterations = 0;
    cin >> iterations;


    int a = 0;
    int b = 0;
    while(iterations-- > 0) {
        cin >> a >> b;
        cout << a + b << endl;
    }

    return 0;
}
