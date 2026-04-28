#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c = -5;
    try {
        if (b <= 0)
            throw "Invalid denominator for b ";
        cout << "a/b = " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    try {
        if (c <= 0)
            throw "Invalid denominator for c ";
        cout << "a/c = " << a / c << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
