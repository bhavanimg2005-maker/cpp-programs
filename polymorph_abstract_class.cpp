#include<iostream>
using namespace std;

class Shape{
protected:
    float x;

public:
    void getData(){
        cin >> x;
    }

    virtual float calculateArea() = 0; // pure virtual function Abstract
};

class Square : public Shape
{
public:
    float calculateArea(){
        return x * x;
    }
};

class Circle : public Shape
{
public:
    float calculateArea(){
        return 3.14 * x * x;
    }
};

int main()
{
    Shape* ptr;
    Square s;
    Circle c;
    cout<<"Enter side of square: ";
    ptr = &s;
    ptr->getData();
    cout<<"Area of Square: "<<ptr->calculateArea()<<endl;

    cout<<"\nEnter radius of circle: ";
    ptr = &c;
    ptr->getData();
    cout<<"Area of Circle: "<<ptr->calculateArea()<<endl;

    return 0;
}
