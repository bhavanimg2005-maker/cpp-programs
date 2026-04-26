#include<iostream>
using namespace std;

class Car
{
private:
    string brand;
    int speed;

public:
    Car(string brand, int speed)
    {
        this->brand = brand;
        this->speed = speed;
    }

    void display()
    {
        cout<<"Brand: "<<this->brand<<endl;
        cout<<"Speed: "<<this->speed<<" km/h"<<endl;
    }
};

int main()
{
    Car c1("BMW", 180);
    Car c2("Audi", 200);

    cout<<"Car 1 Details"<<endl;
    c1.display();

    cout<<"\nCar 2 Details"<<endl;
    c2.display();

    return 0;
}
