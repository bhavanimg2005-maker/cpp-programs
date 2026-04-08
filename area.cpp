#include<iostream>
using namespace std;

class Rectangle{
private:
 int length;
 int breadth;

public:
    void Data(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
 Rectangle r;
 r.Data(10, 10);
 cout << "Area of Rectangle = " << r.calculateArea();

    return 0;
}

