//class rectangle data members length and breadth ,create object and calculate area using member function
#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setData(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r;   // creating object

    r.setData(10, 5);   // setting length and breadth

    cout << "Area of Rectangle = " << r.calculateArea();

    return 0;
}
