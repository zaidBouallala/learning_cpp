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

float getFractionalPart(float number){
    return number  - int(number);
}

float myRound(float number)
{
    int intPart = int(number);
    float fractionalPart = getFractionalPart(number);

    if (abs(fractionalPart)  >= 0.5)
        if(number > 0)
            return ++intPart;
        else
            return --intPart;
    else
        return intPart;
}

int main()
{
    float number = readNumber("Please enter a number: ");
    cout << "(My round result)The rounded value of " << number << " is: " << (float)myRound(number) << endl;
    cout << "(C++ round function) The rounded value of " << number << " is: " << (float)round(number) << endl;

    return 0;
}