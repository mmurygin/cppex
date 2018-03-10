#include <iostream>
#include "../utils/2d-array.h"
using namespace std;

int ** transpose(const int * const * m, unsigned rows, unsigned cols) {
    int ** result = create2dArray(cols, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = m[i][j];
        }
    }
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

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            m[i][j] = i * cols + j;
        }
    }

    int **transposed = transpose(m, rows, cols);
    print2dArray(transposed, cols, rows);
    delete2dArray(m);
    delete2dArray(transposed);

    return 0;
}
