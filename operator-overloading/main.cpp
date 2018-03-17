#include <iostream>
#include "rational.h"

int main() {
    Rational a(0);
    (a += 5) += 5;

    std::cout << a.to_double() << std::endl;

    return 0;
}
