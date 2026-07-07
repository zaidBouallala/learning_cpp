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


float myFloor(float number)
{
    int intPart = int(number);
        if(number > 0)
            return intPart;
        else
            return --intPart;
}
int main()
{
    float number = readNumber("Please enter a number: ");
    cout << "(My floor result)The floor value of " << number << " is: " << myFloor(number) << endl;
    cout << "(C++ floor function) The floor value of " << number << " is: " << floor(number) << endl;

    return 0;
}