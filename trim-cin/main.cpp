#include <iostream>
using namespace std;

int main() {
    const char SPACE = ' ';
    char c = '\0';

    bool previousWasSpace = false;
    while (cin.get(c))
    {
        if (c == SPACE && previousWasSpace) {
            continue;
        }

        if (c == SPACE) {
            previousWasSpace = true;
        } else {
            previousWasSpace = false;
        }

        cout << c;
    }

    return 0;
}
