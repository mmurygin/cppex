#include <iostream>
using namespace std;

struct Cls
{
    Cls(char c, double d, int i)
        : c(c), d(d), i(i) {}

  private:
    char c;
    double d;
    int i;
};

struct ClsCopy
{
    ClsCopy() {
        c = 'a';
        d = 0.0;
        i = 0;
    }

    char c;
    double d;
    int i;
};

char & get_c(Cls &cls)
{
    return ((ClsCopy*)(&cls))->c;
}

double & get_d(Cls &cls)
{
    return ((ClsCopy *)(&cls))->d;
}

int & get_i(Cls &cls)
{
    return ((ClsCopy *)(&cls))->i;
}

int main() {
    Cls cls = Cls('u', 1.5, 2);
    ClsCopy * copy = new ClsCopy();

    cout <<
        copy << " "
        << (void*)&(copy->c) << " "
        << &copy->d << " "
        << &copy->i << endl;

    cout << "c: " << get_c(cls) << endl;
    cout << "d: " << get_d(cls) << endl;
    cout << "i: " << get_i(cls) << endl;
    return 0;
}
