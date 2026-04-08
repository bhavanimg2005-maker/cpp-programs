//static variable display
#include<iostream>
using namespace std;

class Demo{
 static int count;
public:
    void getCount()
    {
        cout<<"count="<<++count;
    }
};
int Demo :: count;

int main()
{
    Demo d1,d2,d3;
    d1.getCount();
    d2.getCount();
    d3.getCount();
    return 0;

}
