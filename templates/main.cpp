#include <iostream>
#include "array.h"

using namespace std;

int main() {
    Array<int> * ar = new Array<int>(10, 2);
    Array<int> * ar2 = new Array<int>(5, 8);

    (*ar) = *ar2;

    // ar[2] = 10;

    for (int i = 0; i < ar->size(); i++) {
        cout << (*ar)[i] << " ";
    }

    cout << endl;

    return 0;
}
