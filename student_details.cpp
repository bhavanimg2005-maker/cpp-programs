#include<iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;
    float marks;

public:
    void getData()
    {
        cout<<"Enter Student ID: ";
        cin>>id;

        cout<<"Enter Student Name: ";
        cin>>name;

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"\nStudent Details"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.display();

    return 0;
}
