#include <iostream> 
using namespace std;

int main()
{
    // Arithmetic Operators 
    int a = 10, b = 20;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus


// Prefix and Postfix Increment and Decrement Operators
    int x = 5;
    cout << "x++ = " << x++ << endl; // Postfix Increment
    cout << "++x = " << ++x << endl; // Prefix Increment
    cout << "x-- = " << x-- << endl; // Postfix Decrement
    cout << "--x = " << --x << endl; // Prefix Decrement


    int A = 10;
    int B = A++; // Postfix Increment
    cout << "A = " << A << endl; // A is now 11
    cout << "B = " << B << endl; // B is 10, because A was incremented after assignment

    B = ++A; // Prefix Increment
    cout << "A = " << A << endl; // A is now 12
    cout << "B = " << B << endl; // B is 12, because A was incremented before assignment
    
    return 0;

}
