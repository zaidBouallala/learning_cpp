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


float mySqrt(float number)
{
    return pow(number, 0.5);
}
int main()
{
    float number = readNumber("Please enter a number: ");
    cout << "(My Sqrt result)The Sqrt value of " << number << " is: " << mySqrt(number) << endl;
    cout << "(C++ Sqrt function) The Sqrt value of " << number << " is: " << sqrt(number) << endl;

    return 0;
}