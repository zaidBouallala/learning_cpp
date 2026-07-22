#include <iostream>

using namespace std;

int main()
{
    // Bitwise OR (|) operator example all about the | Operator
    // The | operator performs a bitwise OR operation between two integers.
    /*
    5 in binary: 0101
    3 in binary: 0011
    Result:      0111

    */

    cout << "Bitwise OR (|) of 5 and 3 is: " << (5 | 3) << endl; // Output: 7
    cout << "Bitwise OR (|) of 0 and 0 is: " << (0 | 0) << endl;   // Output: 0
    cout << "Bitwise OR (|) of 8 and 9 is: " << (8 | 9) << endl;   // Output: 9
    cout << "Bitwise OR (|) of 100 and 99 is: " << (100 | 99) << endl;   // Output: 103
    cout << "Bitwise OR (|) of 11 and 31 is: " << (11 | 31) << endl;   // Output: 31
    cout << "Bitwise OR (|) of 12 and 12 is: " << (12 | 12) << endl;   // Output: 12

    return 0;   
}