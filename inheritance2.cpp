#include<iostream>
using namespace std;

class Parent
{
private:
    int x;

protected:
    int y;

public:
    int z;

    void setValues()
    {
        x = 10;
        y = 20;
        z = 30;
    }
};

class Child : private Parent
{
public:
    void display()
    {
        setValues();

        cout << "Protected Variable: " << y << endl;
        cout << "Public Variable: " << z << endl;
    }
};

int main()
{
    Child obj;
    obj.display();

    return 0;
}
