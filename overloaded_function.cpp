//function overloading
#include <iostream>
using namespace std;
class Display {
public:
    void show(int a)
    {
        cout << "Integer: " << a << endl;
    }
    void show(float b)
    {
        cout << "Float: " << b << endl;
    }
    void show(int a, float b)
    {
        cout << "Integer and Float: " << a << ", " << b << endl;
    }
};
int main() {
    int a = 5;
    float b = 5.5;
    Display obj;
    obj.show(a);
    obj.show(b);
    obj.show(a, b);

    return 0;
}
