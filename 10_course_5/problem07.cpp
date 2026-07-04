#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int readPositiveInteger(string prompt){
    int number;
    do{
        cout << prompt;

        cin >> number;
    }while(number <=0);

    return number;
}

// void printDigitsInReverse(int number){
    
//     string numberStr = to_string(number);
//     int length = numberStr.length();
//     for (int i = length -1;i>=0; i--)cout << numberStr[i] <<endl;
//     cout << endl;
// }
void reverseNumber(int number){
    
   int reminder = 0 ,newNumber = 0;
   while(number > 0){
    reminder = number % 10;
   newNumber = newNumber * 10 + reminder;
    number /= 10;
   }
   cout <<"reverse number is : " << newNumber << endl;
}
                 



int main()
{
    //printDigitsInReverse(readPositiveInteger("Please enter a positive integer: "));
    reverseNumber(readPositiveInteger("Please enter a positive integer: "));


    return 0;
}





// #include <iostream>   // Include the iostream library for input/output operations.
// #include <string>     // Include the string library to use std::string.
// using namespace std;  // Use the standard namespace to simplify access to standard library functions.

// // Function: ReadPositiveNumber
// // Purpose: Prompts the user to enter a positive number using a custom message.
// //          It continues to prompt until the user inputs a number greater than zero.
// // Parameter: Message - a string containing the prompt to be displayed to the user.
// // Returns: A positive integer entered by the user.
// int ReadPositiveNumber(string Message)
// {
//     int Number = 0;  // Variable to store the user's input.
    
//     // Repeat the following block until a positive number is entered.
//     do
//     {
//         cout << Message << endl; // Display the prompt message.
//         cin >> Number;           // Read the number from user input.
//     } while (Number <= 0);       // Continue looping if the number is not greater than zero.
    
//     return Number;  // Return the valid positive number.
// }

// // Function: ReverseNumber
// // Purpose: Reverses the digits of the given number.
// //          For example, if the input is 123, the function returns 321.
// // Parameter: Number - the positive integer to be reversed.
// // Returns: The reversed number.
// int ReverseNumber(int Number)
// {
//     int Remainder = 0;  // Variable to store the last digit extracted from the number.
//     int Number2 = 0;    // Variable to accumulate the reversed number.
    
//     // Loop until there are no more digits left in Number.
//     while (Number > 0)
//     {
//         Remainder = Number % 10;   // Extract the last digit of Number.
//         Number = Number / 10;      // Remove the last digit from Number.
//         Number2 = Number2 * 10 + Remainder;  // Append the digit to Number2 by shifting left and adding Remainder.
//     }
    
//     return Number2;  // Return the reversed number.
// }

// // Main function: Program entry point.
// int main()
// {
//     // Prompt the user for a positive number, reverse its digits, and then display the result.
//     cout << "\nReverse is:\n" 
//          << ReverseNumber(ReadPositiveNumber("Please enter a positive number?"))
//          << "\n";
    
//     return 0;  // Return 0 to indicate successful execution.
// }