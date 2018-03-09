#include <iostream>
using namespace std;

char *resize(const char *str, unsigned size, unsigned new_size)
{
    char * newStr = new char[new_size];

    for(unsigned i = 0; i < size && i < new_size; ++i) {
        newStr[i] = str[i];
    }

    delete [] str;

    return newStr;
}

char * getline() {
    int index = -1;
    int capacity = 4;
    char * result = new char[capacity];

    char c;
    while(cin.get(c)) {
        if (c == '\n') break;

        index++;

        if(index == capacity) {
            result = resize(result, capacity, capacity * 2);
            capacity *=2;
        }

        result[index] = c;
    }

    result[index+1] = '\0';

    return result;
}

int main() {
    char * line = getline();
    cout << line << endl;
    return 0;
}
