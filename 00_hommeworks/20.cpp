#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//#31 (Power of 2, 3, 4): Write a program that takes a number and prints its square ($N^2$), cube ($N^3$), and fourth power ($N^4$).
float returnPowers(double n) {
    cout << "The square of " << n << " is: " << pow(n, 2) << endl;
    cout << "The cube of " << n << " is: " << pow(n, 3) << endl;
    cout << "The fourth power of " << n << " is: " << pow(n, 4) << endl;
    return 0;
    
}

//#32 (Power of M): Write a program to calculate a base number $N$ raised to the power of an exponent $M$ ($N^M$).
double calculatePower(double n, double m) {
    return pow(n, m);
}

int main()
{
    double number, exponent;
    cout << "Enter the base number (N): ";
    cin >> number;
    cout << "Enter the exponent (M): ";
    cin >> exponent;

    returnPowers(number);
    double result = calculatePower(number, exponent);
    cout << number << " raised to the power of " << exponent << " is: " << result << endl;

return 0;
}
