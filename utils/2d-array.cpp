#include <iostream>

int **create2dArray(unsigned x, unsigned y)
{
    int **m = new int *[x];
    m[0] = new int[x * y];

    for (unsigned i = 1; i < x; ++i)
    {
        m[i] = m[i - 1] + y;
    }

    return m;
}

void delete2dArray(int ** m)
{
    delete [] m[0];
    delete [] m;
}

void print2dArray(const int *const *m, unsigned rows, unsigned cols)
{
    for (unsigned i = 0; i < rows; ++i)
    {
        for (unsigned j = 0; j < cols; ++j)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
