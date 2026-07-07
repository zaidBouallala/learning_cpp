#include <iostream>
#include <cmath>
using namespace std;


float readNumber(string prompt)
{
    float number;
    cout << prompt;
    cin >> number;
    return number;
}


float myCeil(float number)
{
    int intPart = int(number);
        if(number > 0)
            return ++intPart;
        else
            return intPart;
}
int main()
{
    float number = readNumber("Please enter a number: ");
    cout << "(My Ceil result)The Ceil value of " << number << " is: " << myCeil(number) << endl;
    cout << "(C++ Ceil function) The Ceil value of " << number << " is: " << ceil(number) << endl;

    return 0;
}