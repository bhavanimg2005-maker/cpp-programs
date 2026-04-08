//non-inline of time.cpp
#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    void getTime() {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    void displayTime() {
        cout << hours << "h " << minutes << "m " << seconds << "s";
    }
    Time addTime(Time t);
};

Time Time::addTime(Time t) {
    Time temp;

    temp.seconds = seconds + t.seconds;
    temp.minutes = minutes + t.minutes + temp.seconds / 60;
    temp.seconds = temp.seconds % 60;

    temp.hours = hours + t.hours + temp.minutes / 60;
    temp.minutes = temp.minutes % 60;

    return temp;
}

int main() {
    Time t1, t2, result;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "Enter second time:\n";
    t2.getTime();

    result = t1.addTime(t2);

    cout << "Sum of times: ";
    result.displayTime();

    return 0;
}
