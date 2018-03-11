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
    ClsCopy cls_copy = ClsCopy();
    char * cls_copy_pointer = (char*)(void*)(&cls_copy);
    char * cls_copy_field_pointer = &cls_copy.c;

    long diff = cls_copy_field_pointer - cls_copy_pointer;

    char * cls_field_pointer = (char*)(void*)(&cls) + diff;

    return *cls_field_pointer;
}

double & get_d(Cls &cls)
{
    ClsCopy cls_copy = ClsCopy();
    char *cls_copy_pointer = (char *)(void *)(&cls_copy);
    char *cls_copy_field_pointer = (char*)&cls_copy.d;

    long diff = cls_copy_field_pointer - cls_copy_pointer;

    char *cls_field_pointer = (char *)(void *)(&cls) + diff;

    return *(double*)cls_field_pointer;
}

int & get_i(Cls &cls)
{
    ClsCopy cls_copy = ClsCopy();
    char *cls_copy_pointer = (char *)(void *)(&cls_copy);
    char *cls_copy_field_pointer = (char*)&cls_copy.i;

    long diff = cls_copy_field_pointer - cls_copy_pointer;

    char *cls_field_pointer = (char *)(void *)(&cls) + diff;

    return *(int*)cls_field_pointer;
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
