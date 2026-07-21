#include <iostream>
#include "mylab.h"
#include "my-libs/myReadLib.h"
#include "my-libs/myMathLib.h"

using namespace std;
int main()
{
 MYLib::Print();

    int number = myReadLib::ReadPositiveNumber("Please enter a positive number: ");
    cout << "You entered: " << number << endl;

    float num = 5.7;
    cout << "Fractional part of " << num << " is: " << MyMathLib::getFractionalPart(num) << endl;
    cout << "Absolute value of -10 is: " << MyMathLib::myAbs(-10) << endl;
    cout << "Rounded value of 5.7 is: " << MyMathLib::myRound(5.7) << endl;
    cout << "Floor value of 5.7 is: " << MyMathLib::myFloor(5.7) << endl;
    cout << "Ceil value of 5.7 is: " << MyMathLib::myCeil(5.7) << endl;
    cout << "Square root of 25 is: " << MyMathLib::mySqrt(25) << endl;

    return 0;


}