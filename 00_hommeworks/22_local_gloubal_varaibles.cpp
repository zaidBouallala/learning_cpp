#include <iostream>
using namespace std;

int x = 300; // Global variable
float y = 3.14; // Global variable

void myFunction1()
{
    int x = 10; // Local variable
    cout << "Inside myFunction1, x = " << x << endl;
    cout << "Inside myFunction1, y = " << y << endl; // Accessing global variable y
}

int main()
{
    int x = 30; // Local variable in main
    cout << "Inside main, x = " << x << endl;
    cout << "Inside main, y = " << y << endl; // Accessing global variable y
    myFunction1(); // Call myFunction1 to demonstrate scope


    cout << "Global x = " << ::x << endl; 
    cout << "Global y = " << y << endl; 

    ::x= 7000; // Increment the global variable x
    y = 6.28; // Modify the global variable y

    cout << "Global x = " << ::x << endl; // Accessing the global variable using scope resolution operator
    cout << "Global y = " << y << endl; // Accessing the modified global variable y

    return 0;
}