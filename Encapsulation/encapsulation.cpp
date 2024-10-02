
// Encapsulaton :
// It is wrapping up of data & member function in single unit called class.
// It helps in data hiding.

// Keys concept of encapsulation
// 1. data hiding

// The data (attributes) of a class can be hidden from the outside world using access specifiers like private or protected.

// This helps in controlling how the data is accessed or modified.

// 2. access control
// C++ provides three access specifiers:

// private: The members declared under private can only be accessed by methods within the same class.

// protected: Members declared under protected can be accessed within the same class, derived classes, and friends.

// public: The members declared under public can be accessed from outside the class.

// 3.Encapsulation Through Methods:
// To manipulate or access private data, you provide public getter and setter methods. This helps in implementing validation logic before modifying the data.

// To access private date best is to use getter and setter

#include <iostream>
#include <string>
using namespace std;

class account
{
private: // access modifier
    double balance;
    string password;

public:
    string accountId;
    string userName;

    //  setter
    void setBalance(double b)
    {
        balance = b;
    }

    // getter
    double getBalance()
    {
        return balance;
    }

    //  setter
    void setPassword(string p)
    {
        password = p;
    }

    // getter
    string getPassword()
    {
        return password;
    }

    void displayAccountDetails()
    {
        cout << "Account ID: " << accountId << endl;
        cout << "User Name: " << userName << endl;
        cout << "Balance: " << balance << endl;
        cout << "Password: " << password << endl;
    }
};

int main()
{

    account a1;
    a1.accountId = "876786";
    a1.userName = "shubh";

    double balance = 3244;
    a1.setBalance(balance);
    a1.getBalance();
    // cout << "Balance: " << a1.getBalance() << endl;

    string password = "dfsfhfh";
    a1.setPassword(password);
    a1.getPassword();
    // cout << "Password: " << a1.getPassword() << endl;

    a1.displayAccountDetails();

    return 0;
}