#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
    virtual void Draw() = 0;
};

class Circle : public Shape
{
public:
    void Draw()
    {
        cout << "this is Circle \n";
    }
};

int main()
{

    // Shape is Abstract class and we can't make its object

    Circle p1;
    p1.Draw();

    return 0;
}