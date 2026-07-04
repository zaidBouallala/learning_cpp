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

void printDigitsInReverse(int number){
    
    string numberStr = to_string(number);
    int length = numberStr.length();
    for (int i = length -1;i>=0; i--)cout << numberStr[i] <<endl;
    cout << endl;
}
void printDigitsInReverse2(int number){
    
   int reminder = 0;
   while(number > 0){
    reminder = number % 10;
    cout << reminder << endl;
    number /= 10;
   }
}




int main()
{
    printDigitsInReverse(readPositiveInteger("Please enter a positive integer: "));
    printDigitsInReverse2(readPositiveInteger("Please enter a positive integer: "));
    return 0;
}








// #include <iostream>   // Include the iostream library for input/output operations.
// #include <string>     // Include the string library to work with std::string.
// using namespace std;  // Use the standard namespace to simplify usage of standard library functions.

// // Function: ReadPositiveNumber
// // Purpose: Prompts the user with a custom message to enter a positive number.
// //          The function repeatedly asks until the user enters a number greater than zero.
// // Parameter: Message - a string containing the prompt to display.
// // Returns: An integer representing the positive number input by the user.
// int ReadPositiveNumber(string Message)
// {
//     int Number = 0;  // Initialize a variable to store the user's input.
    
//     // Use a do-while loop to ensure the prompt is shown at least once.
//     do
//     {
//         cout << Message << endl; // Display the prompt message.
//         cin >> Number;           // Read the number from the user.
//     } while (Number <= 0);       // Repeat if the entered number is not positive.
    
//     return Number;  // Return the validated positive number.
// }

// // Function: PrintDigits
// // Purpose: Prints the digits of a given number in reverse order, one digit per line.
// //          It extracts each digit from the number using the modulo operator and then reduces the number.
// // Parameter: Number - the positive integer whose digits are to be printed.
// void PrintDigits(int Number)
// {
//     int Sum = 0, Remainder = 0; // Initialize variables. Although 'Sum' is declared, it is not used in this function.
    
//     // Continue looping while there are digits left in Number.
//     while (Number > 0)
//     {
//         Remainder = Number % 10; // Extract the last digit of Number.
//         Number = Number / 10;    // Remove the last digit from Number.
//         cout << Remainder << endl;  // Print the extracted digit on a new line.
//     }
// }

// // Main function: Entry point of the program.
// int main()
// {
//     // Call ReadPositiveNumber to get a positive integer from the user and pass it to PrintDigits.
//     PrintDigits(ReadPositiveNumber("Please enter a positive number?"));
    
//     return 0;  // Return 0 to indicate that the program executed successfully.
// }