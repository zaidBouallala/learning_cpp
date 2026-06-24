#include <iostream>
using namespace std;

int main()
{
    // Note :: By default everything is signed in C++ programming language
    int v1;
    signed int v2;

    unsigned int v3; // unsigned int can only store positive values and zero

    short int v4;
    short v5; // short is a smaller version of int, typically 2 bytes

    unsigned short int v6; // unsigned short can only store positive values and zero
    unsigned short v7;     // unsigned short can only store positive values and zero

    signed long int v8;
    long int v9; // long is a larger version of int, typically 4 or 8 bytes
    long v10; // long is a larger version of int, typically 4 or 8 bytes

    unsigned long v11; // unsigned long can only store positive values and zero

    long long int v12; // long long is an even larger version of int, typically 8 bytes 

    unsigned long long v13; // unsigned long long can only store positive values and zero, typically 8 bytes
    unsigned long long int v14; // unsigned long long int can only store positive values and zero, typically 8 bytes






// roles

double distance = 56E12; // 56E12 is equal to  56 * 10^12

cout << "Distance: " << distance << endl;


short d = 3434233; // Error: 3434233 is too large for a short int, which typically has a maximum value of 32767

cout << "d: " << d << endl;

unsigned int a = -10; // Error: -10 is not a valid value for an unsigned int, which can only store positive values and zero 
cout << "a: " << a << endl;


// using the sizeof() operator to determine the size of different data types in bytes
cout << "Size of int: " << sizeof(int) << " bytes" << endl;
cout << "Size of short: " << sizeof(short) << " bytes" << endl;
cout << "Size of long: " << sizeof(long) << " bytes" << endl;
cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
cout << "Size of float: " << sizeof(float) << " bytes" << endl;
cout << "Size of double: " << sizeof(double) << " bytes" << endl;
cout << "Size of char: " << sizeof(char) << " bytes" << endl;
cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;


// range of values for different data types
cout << "******************************************************"<< endl;
cout << "Range of int: " << INT_MIN << " to " << INT_MAX << endl;
cout << "Range of short: " << SHRT_MIN << " to " << SHRT_MAX << endl;
cout << "Range of long: " << LONG_MIN << " to " << LONG_MAX << endl;
cout << "Range of long long: " << LLONG_MIN << " to " << LLONG_MAX << endl;


    return 0;
}
