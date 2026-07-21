#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

namespace myReadLib
{

    int ReadPositiveNumber(string Message)
    {
        int Number = 0; // Variable to store the user's input.
        do
        {
            cout << Message << endl; // Display the prompt message.
            cin >> Number;           // Read the number entered by the user.
        } while (Number <= 0); // Continue prompting if the number is not positive.

        return Number; // Return the validated positive number.
    }

}