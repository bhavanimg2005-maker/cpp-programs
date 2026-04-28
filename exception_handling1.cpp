//write a cpp to read roll number,name,age and subject marks of a student and implement suitable exception handling methods to validate the input
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    int roll, age;
    string name;
    float marks;

public:
    void getData() {
        try {
            cout << "Enter Roll Number: ";
            cin >> roll;
            if (roll <= 0)
                throw "Invalid Roll Number!";

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            if (name.empty())
                throw "Name cannot be empty!";

            cout << "Enter Age: ";
            cin >> age;
            if (age< 18)
                throw age;

            cout << "Enter Marks: ";
            cin >> marks;
            if (marks < 0 || marks > 100)
                throw marks;
        }

        catch (const char* msg) {
            cout << "Error: " << msg << endl;
        }

        catch (int a) {
            cout << "Error: Invalid Age (" << a << ")" << endl;
        }

        catch (float m) {
            cout << "Error: Invalid Marks (" << m << ")" << endl;
        }
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.getData();
    s.display();
    return 0;
}
