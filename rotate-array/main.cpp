#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void rotate(int a[], unsigned size, int shift) {
    shift = shift % size;
    while(shift--) {
        for(unsigned i = 0; i < size - 1; ++i) {
            swap(a[i], a[i+1]);
        }
    }
}

int main() {
    cout << "Enter the array size: " << endl;
    unsigned size = 0;
    cin >> size;

    int shift;
    cout << "Enter the shift: " << endl;
    cin >> shift;

    int m[size] = {};
    int *last = m + size;
    for (int* p = m; p < last; ++p) {
        *p = p - m + 1;
    }

    rotate(m, size, shift);

    for (int *p=m; p < last; ++p) {
        cout << *p << ' ';
    }

    cout << endl;

    return 0;
}
