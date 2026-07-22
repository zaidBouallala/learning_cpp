#include <iostream>

using namespace std;

int main()
{
    // Bitwise AND (&) operator example all about the & Operator
    // The & operator performs a bitwise AND operation between two integers.
    /*
    5 in binary: 0101
    3 in binary: 0011
    Result:      0001

    */


    cout << "Bitwise AND (&) of 5 and 3 is: " << (5 & 3) << endl; // Output: 1
    cout << "Bitwise and (&) of 0 and 0 is: " << (0 & 0) << endl;   // Output: 0
    cout << "Bitwise and (&) of 8 and 9 is: " << (8 & 9) << endl;   // Output: 8
    cout << "Bitwise and (&) of 8 and 9 is: " << (8 & 9) << endl;   // Output: 8
    cout << "Bitwise and (&) of 100 and 99 is: " << (100 & 99) << endl;   // Output: 96
    cout << "Bitwise and (&) of 11 and 31 is: " << (11 & 31) << endl;   // Output: 3
    cout << "Bitwise and (&) of 12 and 12 is: " << (12 & 12) << endl;   // Output: 12




    return 0;
}