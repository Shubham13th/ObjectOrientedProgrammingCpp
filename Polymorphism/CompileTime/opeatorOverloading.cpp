#include <iostream>
using namespace std;

// Class to represent a complex number
class Complex {
public:
    float real; // Real part of the complex number
    float imag; // Imaginary part of the complex number

    // Constructor to initialize the complex number
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    // This function allows adding two Complex objects
    Complex operator+(const Complex &c) {
        // Create a new Complex object with the sum of the real parts
        // and the sum of the imaginary parts
        return Complex(real + c.real, imag + c.imag);
    }

    // Function to display the complex number in a+bi format
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Creating two Complex objects
    Complex c1(2.5, 3.5); // c1 represents 2.5 + 3.5i
    Complex c2(1.5, 2.5); // c2 represents 1.5 + 2.5i

    // Adding two Complex objects using the overloaded + operator
    Complex c3 = c1 + c2;  // This invokes c1.operator+(c2)

    // Display the result of the addition
    c3.display();           // Outputs: 4.0 + 6.0i

    return 0;
}
