#include <iostream>
#include <string>
using namespace std;

// Base class
class Account
{
private:
    int accNo;
    double balance;

public:
    // FIX: Added default constructor
    // ERROR TYPE: Compilation Error (no matching constructor)
    Account()
    {
        accNo = 0;
        balance = 0;
    }

    Account(int a, double b)
    {
        accNo = a;
        balance = b;
    }

    void deposit(double amt)
    {
        // FIX: Added missing semicolon
        // ERROR TYPE: Syntax Error
        if (amt > 0)
            balance = balance + amt;
    }

    void withdraw(double amt)
    {
        if (amt > balance)
            cout << "Insufficient Balance" << endl;
        else
            balance = balance - amt;
    }

    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }

    // FIX: Added setter function
    // ERROR TYPE: Access Control Error (private member access)
    void setBalance(double b)
    {
        balance = b;
    }

    ~Account()
    {
        cout << "Account closed" << endl;
    }
};

// Derived class
class Savings : public Account
{
protected:
    double interestRate;

public:
    Savings(int a, double b, double r) : Account(a, b)
    {
        interestRate = r;
    }

    void addInterest()
    {
        double interest = getBalance() * interestRate / 100;
        deposit(interest);
    }
};

// Another derived class
class PremiumSavings : public Savings
{
private:
    int rewardPoints;

public:
    PremiumSavings(int a, double b, double r, int p)
        : Savings(a, b, r)
    {
        rewardPoints = p;
    }

    void showDetails()
    {
        display();
        cout << "Interest Rate: " << interestRate << endl;
        cout << "Reward Points: " << rewardPoints << endl;
    }
};

// Friend function
class Bank;

class Auditor
{
public:
    void audit(Bank b);
};

class Bank
{
private:
    double totalFunds;

public:
    Bank()
    {
        totalFunds = 0;
    }

    void addFunds(double amt)
    {
        totalFunds += amt;
    }

    friend void Auditor::audit(Bank b);
};

void Auditor::audit(Bank b)
{
    cout << "Total Bank Funds: " << b.totalFunds << endl;
}

// Utility class
class Logger
{
public:
    static int logCount;

    void log(string msg)
    {
        cout << "LOG: " << msg << endl;
        logCount++;
    }
};

int Logger::logCount = 0;

int main()
{
    Savings s1(1001, 5000, 5);
    s1.deposit(1000);
    s1.addInterest();
    s1.display();

    PremiumSavings p1(2001, 10000, 7, 200);
    p1.showDetails();

    Logger l1;
    l1.log("Account Created");

    Logger l2;
    l2.log("Transaction Done");

    cout << "Total Logs: " << Logger::logCount << endl;

    Bank b1;
    b1.addFunds(50000);
    b1.addFunds(25000);

    Auditor a;
    a.audit(b1);

    // FIX: Cannot access private member directly
    // ERROR TYPE: Access Control Error
    s1.setBalance(10000);

    // FIX: display() must be called with object
    // ERROR TYPE: Compilation Error (function not declared in scope)
    s1.display();

    // FIX: Default constructor required
    // ERROR TYPE: Compilation Error
    Account a1;

    // FIX: Invalid object assignment
    // ERROR TYPE: Type Mismatch / Compilation Error
    // PremiumSavings p2 = s1;

    // FIX: Negative deposit prevented
    // ERROR TYPE: Logical Error
    s1.deposit(-500);

    // FIX: Cannot access protected member outside class
    // ERROR TYPE: Access Control Error
    // cout << p1.interestRate << endl;

    // FIX: Do not manually call destructor
    // ERROR TYPE: Runtime / Logical Error
    // s1.~Savings();

    return 0;
}
