#include <iostream>   // Include the iostream library for input/output operations.
#include <string>     // Include the string library (not used in this example but available if needed).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;  // Use the standard namespace to simplify access to standard library functions.

// Function: RandomNumber
// Purpose: Generates a random integer between two specified values, inclusive.
// Parameters:
//    From - The lower bound of the desired random range.
//    To   - The upper bound of the desired random range.
// Returns: A random integer between From and To (inclusive).
int RandomNumber(int From, int To)
{
    // Calculate a random number in the range [From, To]:
    // rand() % (To - From + 1) gives a value between 0 and (To - From),
    // then adding From shifts this range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
}

// Enumeration: enCharType
// Purpose: Defines different character types for random character generation.
enum enCharType { 
    SamallLetter = 1,    // Represents lowercase letters (ASCII 97 to 122).
    CapitalLetter = 2,   // Represents uppercase letters (ASCII 65 to 90).
    SpecialCharacter = 3,// Represents special characters (ASCII 33 to 47).
    Digit = 4            // Represents digits (ASCII 48 to 57).
};

// Function: GetRandomCharacter
// Purpose: Returns a random character based on the specified character type.
// Parameters:
//    CharType - an enCharType value indicating which category of character to generate.
// Returns: A random character of the specified type.
char GetRandomCharacter(enCharType CharType)
{
    // Use a switch-case to handle the different character types.
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
        // Generate a random lowercase letter (ASCII codes 97 to 122).
        return char(RandomNumber(97, 122));
        break;  // break is not strictly needed after a return.
    }
    case enCharType::CapitalLetter:
    {
        // Generate a random uppercase letter (ASCII codes 65 to 90).
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
        // Generate a random special character (ASCII codes 33 to 47).
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        // Generate a random digit (ASCII codes 48 to 57).
        return char(RandomNumber(48, 57));
        break;
    }
    }
    // If an invalid type is passed, return a null character.
    return '\0';
}

int main()
{
    // Seed the random number generator with the current time.
    // This ensures that the sequence of random numbers is different on each run.
    srand((unsigned)time(NULL));

    // Generate and print one random character for each character type.
    cout << GetRandomCharacter(enCharType::SamallLetter) << endl;      // Random lowercase letter.
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;     // Random uppercase letter.
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;  // Random special character.
    cout << GetRandomCharacter(enCharType::Digit) << endl;             // Random digit.

    return 0;  // Return 0 to indicate successful program execution.
}

// #include <iostream>
// #include <string>
// #include <cmath>
// #include <cstdlib>

// using namespace std;

// enum types { 
//     RANDOM_NUMBER = 1, 
//     RANDOM_UPPER_LETTER = 2, 
//     RANDOM_LOWER_LETTER = 3,
//     RANDOM_SPECIAL_CHARACTER = 4,
// };
// int reandomNumber(int min, int max){
//     return rand() % (max - min + 1) + min;
// }


// void print(){
    
//         cout << reandomNumber(0, 9) << endl;
//         cout << reandomNumber(0, 9) << endl;
//         cout << reandomNumber(0, 9) << endl;
  
// }

// void printRandomThings(types identity)
// {
//     switch (identity)
//     {
//     case RANDOM_NUMBER:
//         cout << reandomNumber(0, 9) << endl;
//         break;
//     case RANDOM_UPPER_LETTER:
//         cout << char(reandomNumber(65, 90)) << endl;
//         break;
//     case RANDOM_LOWER_LETTER:
//         cout << char(reandomNumber(97, 122)) << endl;
//         break;
//     case RANDOM_SPECIAL_CHARACTER:
//         cout << char(reandomNumber(33, 47)) << endl;
//         break;
//     default:
//         cout << reandomNumber(0, 9) << endl;
//         break;
//     }
    
// }
// int main()
// { 
//     srand((unsigned)time(NULL));

//    int choice;
//    cout << "Please choose a type of random thing to print:\n";
//     cout << "1. Random Number (0-9)\n";
//     cout << "2. Random Uppercase Letter (A-Z)\n";
//     cout << "3. Random Lowercase Letter (a-z)\n";
//     cout << "4. Random Special Character (!\"#$%&'()*+,-./)\n";
//     cin >> choice;
//     printRandomThings(static_cast<types>(1));
//     printRandomThings(static_cast<types>(2));
//     printRandomThings(static_cast<types>(3));
//     printRandomThings(static_cast<types>(4));
//     return 0;
// }