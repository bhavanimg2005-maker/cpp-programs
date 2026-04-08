#include<iostream>
using namespace std;
class Car
{
public:
 int price;
 string brand;

 void display()
 {
 cout<<"Price:"<<price<<endl;
 cout<<"Brand"<<brand<<endl;
 }
};
int main()
{
  Car c1;
  c1.price=20000;
  c1.brand="BMW";
  c1.display();

    return 0;
}
