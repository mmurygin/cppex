#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    double D = sqrt(pow(b, 2) - 4 * a * c);

    double x1 = 0;
    double x2 = 0;

    if (D > 0.0) {
        x1 = (-b + D) / (2 * a);
        x2 = (-b - D) / (2 * a);
    }
    else if (D == 0.0) {
        x1 = -b / (2 * a);
        x2 = x1;
    }
    else {
        cout << "No real roots" << endl;
        return 0;
    }

    cout << x1 << " " << x2 << endl;

    return 0;
}
