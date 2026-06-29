#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int x = 300; // Global variable

void myFunction1()
{
    int x = 10; // Local variable
    cout << "Inside myFunction1, x = " << x << endl;
}

void myFunction2()
{
    int x = 20; // Local variable
    cout << "Inside myFunction2, x = " << x << endl;
    myFunction1(); // Call myFunction1 to demonstrate scope
}


int main()
{
    int x = 30; // Local variable in main
    cout << "Inside main, x = " << x << endl;
    myFunction2(); // Call myFunction2 to demonstrate scope
    ::x= 7000; // Increment the global variable x


    cout << "Global x = " << ::x << endl; // Accessing the global variable using scope resolution operator
    return 0;
}