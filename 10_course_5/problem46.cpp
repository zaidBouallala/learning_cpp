#include <iostream>
#include <cmath>
using namespace std;


int readNumber(string prompt)
{
    int number;
    cout << prompt;
    cin >> number;
    return number;
}

int myAbs(int number)
{
    if(number < 0)return -number;
    return number;
}

int main()
{
    float number = readNumber("Please enter a number: ");
    cout << "(My abs result)The absolute value of " << number << " is: " << (float)myAbs(number) << endl;
    cout << "(C++ abs function) The absolute value of " << number << " is: " << (float)abs(number) << endl;

    return 0;
}