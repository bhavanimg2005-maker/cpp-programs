#include<iostream>
using namespace std;

class Car
{
public:
    int price;
    string brand;

    // Default Constructor
    Car()
    {
        price = 0;
        brand = "Unknown";
        cout << "Default Constructor Called\n";
    }

    // Parameterized Constructor
    Car(int p, string b)
    {
        price = p;
        brand = b;
        cout << "Parameterized Constructor Called\n";
    }

    // Copy Constructor
    Car(const Car &c)
    {
        price = c.price;
        brand = c.brand;
        cout << "Copy Constructor Called\n";
    }

    void display()
    {
        cout << "Price: " << price << endl;
        cout << "Brand: " << brand << endl;
    }
};

int main()
{
    // Default constructor object
    Car c1;
    c1.display();

    cout << endl;

    // Parameterized constructor object
    Car c2(20000, "BMW");
    c2.display();

    cout << endl;

    // Copy constructor object
    Car c3 = c2;
    c3.display();

    return 0;
}
