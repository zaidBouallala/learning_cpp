#include <iostream>
#include <cmath>

namespace MyMathLib
{

    int RandomNumber(int From, int To)
    {
        // Generate a random number between 0 and (To - From), then add From to shift the range.
        int randNum = rand() % (To - From + 1) + From;
        return randNum;
    }
    float getFractionalPart(float number)
    {
        return number - int(number);
    }
    int myAbs(int number)
    {
        if (number < 0)
            return -number;
        return number;
    }

    float myRound(float number)
    {
        int intPart = int(number);
        float fractionalPart = getFractionalPart(number);

        if (abs(fractionalPart) >= 0.5)
            if (number > 0)
                return ++intPart;
            else
                return --intPart;
        else
            return intPart;
    }

    float myFloor(float number)
    {
        int intPart = int(number);
        if (number > 0)
            return intPart;
        else
            return --intPart;
    }

    float myCeil(float number)
    {
        int intPart = int(number);
        if (number > 0)
            return ++intPart;

        else
            return intPart;
    }
    float mySqrt(float number)
    {
        return pow(number, 0.5);
    }

}