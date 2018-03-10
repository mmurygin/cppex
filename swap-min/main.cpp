#include <iostream>

using namespace std;

int ** create_memory_consuming_2d_array(unsigned rows, unsigned cols) {
    int ** m = new int * [rows];
    for (unsigned i = 0; i < rows; i++) {
        m[i] = new int[cols];
    }

    return m;
}

void delete_2d_array(int ** m, unsigned rows) {
    for (unsigned i = 0; i < rows; i++) {
        delete m[i];
    }

    delete m;
}

void print_2d_array(const int *const *m, unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; ++i) {
        for (unsigned j = 0; j < cols; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void swap_elements(int ** m, unsigned fromIndex, unsigned toIndex) {
    if (fromIndex == toIndex) {
        return;
    }

    int * sourcePointer = m[fromIndex];
    m[fromIndex] = m[toIndex];
    m[toIndex] = sourcePointer;
}

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min = m[0][0];
    unsigned minRow = 0;

    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            if (m[i][j] < min) {
                minRow = i;
                min = m[i][j];
            }
        }
    }

    swap_elements(m, minRow, 0);
}

int main() {
    unsigned rows;
    cout << "Insert rows number: ";
    cin >> rows;

    unsigned cols;
    cout << "Insert columns number: ";
    cin >> cols;

    int **m = create_memory_consuming_2d_array(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m[i][j] = -i * cols - j;
        }
    }

    swap_min(m, rows, cols);
    print_2d_array(m, rows, cols);
    delete_2d_array(m, rows);

    return 0;
}
