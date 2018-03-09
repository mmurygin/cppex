#include <iostream>
#include "../utils/2d-array.h"
using namespace std;

int ** transpose(const int * const * m, unsigned rows, unsigned cols) {
    int ** result = create2dArray(cols, rows);
    return result;
}

int main() {
    unsigned rows;
    cout << "Insert rows number: ";
    cin >> rows;

    unsigned cols;
    cout << "Insert columns number: ";
    cin >> cols;

    int ** m = create2dArray(rows, cols);

    print2dArray(m, rows, cols);
    delete2dArray(m);

    return 0;
}
