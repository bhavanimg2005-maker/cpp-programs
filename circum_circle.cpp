#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r, circ;
    cout << "Enter radius: ";
    cin >> r;

    circ = 2 * M_PI * r;

    cout << "Circumference: " << circ << endl;
    return 0;
}
