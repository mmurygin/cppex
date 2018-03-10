#include <iostream>
#include "../utils/2d-array.h"
using namespace std;

int ** transpose(const int * const * m, unsigned rows, unsigned cols) {
    int ** result = create_array_2d(cols, rows);
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

    int ** m = create_array_2d(rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            m[i][j] = i * cols + j;
        }
    }

    int **transposed = transpose(m, rows, cols);
    print2dArray(transposed, cols, rows);
    delete_array_2d(m);
    delete_array_2d(transposed);

    return 0;
}
