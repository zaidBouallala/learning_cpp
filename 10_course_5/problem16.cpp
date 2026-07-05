#include <iostream>
#include <string>
using namespace std;

void PrintLetterPattern()
{
    cout << "\n";  // Print an empty line for formatting.
    string word = "";  // Initialize an empty string to build each three-letter combination.
    
    // Outer loop: Starts from the given number and decrements to 1.
    for (int i = 65  ; i <= 90 ; i++)
    {
        for (int j = i; j <=90; j++) // is the same j = i ? or j = 65 .
        {
           for(int k = j; k <=90; k++)  // Print the letter 'i' without a space.
           {
            word += char(i);
            word += char(j);
            word += char(k);
            cout << word << endl;
               cout << char(i) <<  char(j) << char(k) << endl;
           }
        }
        
          // After printing one line, move to the next line.
    }
}


void printWordFromAAAToZZZ()
{
    int counter = 0;
    cout << "\n";  // Print an empty line for formatting.
    for(char i = 'A'; i <= 'Z'; i++)
    {
        for(char ii = 'A'; ii <= 'Z'; ii++) // is the same ii = i ? or ii = 'A' ?
        {
            for(char iii = 'A'; iii <= 'Z'; iii++)
            {
                cout << i << ii << iii << endl;
                counter++;
            }
        }
    }
    cout << "Total number of words printed: " << counter << endl;
}





int main()
{

    //PrintLetterPattern();
    cout << "\n\n\n";
    printWordFromAAAToZZZ();

    return 0;
}
  



// #include <iostream>   // Include iostream for input/output operations.
// #include <string>     // Include string to work with std::string.
// using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// // Function: PrintAllFromAAAtoZZZ
// // Purpose: Prints all three-letter combinations from "AAA" to "ZZZ".
// //          It uses three nested loops to generate every possible combination of three uppercase letters.
// //          After each combination is built, it is printed on a new line.
// //          After finishing all combinations for a given first letter, a separator line is printed.
// void PrintAllFromAAAtoZZZ()
// {
//     cout << "\n";  // Print an empty line for formatting.
//     string word = "";  // Initialize an empty string to build each three-letter combination.
    
//     // Outer loop: Iterates over ASCII values for uppercase letters (65 'A' to 90 'Z') for the first letter.
//     for (int i = 65; i <= 90; i++)
//     {
//         // Middle loop: Iterates over ASCII values for uppercase letters for the second letter.
//         for (int j = 65; j <= 90; j++)
//         {
//             // Inner loop: Iterates over ASCII values for uppercase letters for the third letter.
//             for (int k = 65; k <= 90; k++)
//             {
//                 // Append the current letter for the first position.
//                 word.append(1, char(i));
//                 // Append the current letter for the second position.
//                 word.append(1, char(j));
//                 // Append the current letter for the third position.
//                 word.append(1, char(k));
                
//                 // Output the constructed three-letter word.
//                 cout << word << endl;
//                 // Reset the word string to empty for the next combination.
//                 word = "";
//             }
//         }
//         // After completing combinations for the current first letter, print a separator line.
//         cout << "\n____________________________\n";
//     }
// }

// // Main function: Program entry point.
// int main()
// {
//     // Call the function to print all three-letter combinations from AAA to ZZZ.
//     PrintAllFromAAAtoZZZ();
    
//     return 0;  // Return 0 to indicate successful program execution.
// }