#include <iostream>

using namespace std;
void increment()
{
    static int x = 0;
    cout << "x : " << x << endl;
    x++;
}
int main()
{

    increment();
    increment();
    increment();
    increment();

    // x : 0
    // x : 1
    // x : 2
    // x : 3

    return 0;
}