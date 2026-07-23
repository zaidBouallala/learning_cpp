#include <iostream>
using namespace std;
int main()
{
    // Register Variables Example
    // In this example, we have defined a register variable named 'x'. Register variables are
    // stored in the CPU registers instead of RAM, which makes them faster to access. However,
    // the number of register variables is limited, and they cannot be used with the address-of
    // operator (&). In this example, we are using a register variable to store an integer value
    // and print it to the console.
    register int x = 10;
    cout << x << endl;
    return 0;
}