#include <iostream>
using namespace std;

void area_rect(int l=5,int b=4);
int main()
{
area_rect();
area_rect(10,5);
}

void area_rect(int len, int bre)
{
 int area;
 area = len * bre;
 cout<<"Area of Reactangle :"<<area;
}
