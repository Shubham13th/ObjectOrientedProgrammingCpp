#include <iostream>
using namespace std;

class Counter {
public:
    // Static member variable to count instances
    static int count;

    // Constructor
    Counter() {
        count++; // Increment count each time a Counter object is created
    }

    // Function to display the count
    void displayCount() {
        cout << "Number of Counter objects created: " << count << endl;
    }
};

// Initialize the static member variable
int Counter::count = 0;

int main() {
    Counter c1; // Create first object
    c1.displayCount(); // Display count: 1

    Counter c2; // Create second object
    c2.displayCount(); // Display count: 2

    Counter c3; // Create third object
    c3.displayCount(); // Display count: 3

    return 0;
}
