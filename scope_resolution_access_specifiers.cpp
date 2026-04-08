#include<iostream>
using namespace std;

class Base
{
protected:
    int x;

public:
    void SetData(int a);
    int getData();
};

class Derived : public Base
{
public:
    void display();
};


void Base::SetData(int a)
{
    x = a;
}

int Base::getData()
{
    return x;
}

void Derived::display()
{
    cout << "Value of x = " << getData() << endl;
}

int main()
{
    Derived d;
    d.SetData(10);
    d.display();

    return 0;
}
