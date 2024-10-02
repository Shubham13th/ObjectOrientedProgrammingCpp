#include <iostream>
#include <string>

using namespace std;

class Parent
{
public:
    void showDetails()
    {
        cout << "this is Parents class\n";
    }
};

class Child : public Parent
{
public:
    void showDetails()
    {
        cout << "this is child class\n";
    }
};

int main()
{
    Child c1;
    c1.showDetails();

    // Parent p1;
    // p1.showDetails();

    return 0;
}