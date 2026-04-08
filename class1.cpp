#include<iostream>
using namespace std;
class Student
{
public:
 int id;
  string name;

 void display()
 {
 cout<<"ID:"<<id<<endl;
 cout<<"Name"<<name<<endl;
 }
};
int main()
{
    Student s1,s2;
    s1.id = 134;
    s1.name = "Bmg";

    s2.id = 133;
    s2.name = "rmg";

    s1.display();
    s2.display();

    return 0;
}
