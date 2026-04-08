//Function with aurguments and return value
//write a cpp to pass object as a  aurgument to function where obj represents as time u are required to  add 2 time(non-inline)


//inline
#include<iostream>
using namespace std;
class Time{
 int hour,minute,second;
 public:
     void getTime(){
     cout<<"\nEnter hours:";cin>>hour;
     cout<<"Enter minute:";cin>>minute;
     cout<<"Enter sec:";cin>>second;
     }
     void printTime(){
         cout<<"\nhour"<<hour;
         cout<<"\nminute"<<minute;
         cout<<"\tsecond"<<second;
     }
     void addTime(Time x, Time y)
{
     hour =x.hour+y.hour;
     minute=x.minute+y.minute;
     second=x.second + y.second;
}
};

int main() {
    Time t1, t2, t3;

    cout << "\nEnter Time 1:";
    t1.getTime();

    cout << "\nEnter Time 2:";
    t2.getTime();

    t3.addTime(t1, t2);

    cout << "\nResultant Time:";
    t3.printTime();

    return 0;
}


