#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number.
//          It continues to prompt until the user inputs a number greater than zero.
// Parameter: Message - a string containing the prompt message to be displayed.
// Returns: A positive integer entered by the user.
int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;            // Read the number entered by the user.
    } while (Number <= 0);        // Repeat if the number is not positive.
    
    return Number;  // Return the validated positive number.
}

// Function: PrintInvertedLetterPattern
// Purpose: Prints an inverted letter pattern where each line prints a sequence of letters.
//          The first line prints the given letter repeated that many times, the next line prints one less, and so on.
// Parameter: Number - the starting letter (as an integer) and the maximum count of letters to print in the first line.
void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";  // Print an empty line for formatting.
    
    // Outer loop: Starts from the given number and decrements to 1.
    for (int i = 65 + Number -1 ; i >= 65; i--)
    {
        for (int j = 1; j <= i-65+1; j++)  // i-65+1 or Number - ((65 + Number - 1) - i) or Number -(65 - i + 1 +Number) gives the count of letters to print in the current line.
        {
            cout << char(i);  // Print the letter 'i' without a space.
        }
        
        cout << "\n";  // After printing one line, move to the next line.
    }
}

// Main function: Program entry point.
int main()
{
    // Read a positive number from the user and pass it to the PrintInvertedLetterPattern function.
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number?"));
    
    return 0;  // Return 0 to indicate successful execution.
}


// #include <iostream>   // Include iostream for input/output operations.
// #include <string>     // Include string to work with std::string.
// using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// // Function: ReadPositiveNumber
// // Purpose: Prompts the user with a custom message to enter a positive number.
// //          Repeats until the user enters a number greater than zero.
// // Parameter: Message - a string containing the prompt to display.
// // Returns: A positive integer provided by the user.
// int ReadPositiveNumber(string Message)
// {
//     int Number = 0;  // Variable to store the user's input.
//     do
//     {
//         cout << Message << endl;  // Display the prompt message.
//         cin >> Number;            // Read the number from the user.
//     } while (Number <= 0);        // Continue prompting if the number is not positive.
    
//     return Number;  // Return the validated positive number.
// }

// // Function: PrintInvertedLetterPattern
// // Purpose: Prints an inverted letter pattern using uppercase letters.
// //          The pattern starts with the letter corresponding to ASCII code (65 + Number - 1)
// //          and decrements down to 'A' (ASCII 65). In each row, the letter is printed
// //          a decreasing number of times, starting from 'Number' times on the first row,
// //          down to 1 time on the last row.
// // Parameter: Number - the positive integer that determines the height of the pattern
// //                     and the number of times the first (highest) letter is printed.
// void PrintInvertedLetterPattern(int Number)
// {
//     cout << "\n";  // Print an empty line for formatting.
  
//     // Outer loop: 'i' represents the ASCII code for the current letter.
//     // It starts at (65 + Number - 1) which is the highest letter to be printed,
//     // and decrements down to 65 ('A').
//     for (int i = 65 + Number - 1; i >= 65; i--)
//     {
//         // Calculate the number of times to print the current letter.
//         // When i = 65 + Number - 1, (65 + Number - 1 - i) equals 0,
//         // so the inner loop runs 'Number' times.
//         // For each subsequent row, this value increases, reducing the count by 1 each time.
//         for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)
//         {
//             cout << char(i);  // Print the current letter (converted from its ASCII code).
//         }
      
//         cout << "\n";  // After printing the current row, move to the next line.
//     }
// }

// // Main function: Entry point of the program.
// int main()
// {
//     // Prompt the user to enter a positive number and use it to print the inverted letter pattern.
//     PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number?"));
    
//     return 0;  // Return 0 to indicate successful program execution.
// }