#pragma once

int **create2dArray(unsigned x, unsigned y);

void delete2dArray(int **m);

void print2dArray(const int *const *m, unsigned rows, unsigned cols);
