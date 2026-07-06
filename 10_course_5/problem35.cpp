
// #include <iostream>   // Include the iostream library for input/output operations.
// #include <cstdlib>
// using namespace std;  // Use the standard namespace to avoid prefixing std:: to common functions.

// // Function: ReadPositiveNumber
// // Purpose: Prompts the user with a custom message to enter a positive number.
// //          It repeatedly asks until the user inputs a number greater than zero.
// // Parameter: Message - a string containing the prompt to display.
// // Returns: A positive integer entered by the user.

// int RandomNumber(int From, int To)
// {
//     // Generate a random number between 0 and (To - From), then add From to shift the range.
//     int randNum = rand() % (To - From + 1) + From;
//     return randNum;
// }


// int ReadPositiveNumber(string Message)
// {
//     int Number = 0;  // Variable to store the user's input.
//     do
//     {
//         cout << Message << endl; // Display the prompt message.
//         cin >> Number;           // Read the number entered by the user.
//     } while (Number <= 0);       // Continue prompting if the number is not positive.
    
//     return Number;  // Return the validated positive number.
// }

// void ReadArray(int arr[100], int &arrLength)
// {
//     cout << "\nEnter number of elements:\n";
//     cin >> arrLength;  // Read the total number of elements the user wishes to input.
  
    
//     for (int i = 0; i < arrLength; i++)
//     {
       
//         arr[i]= RandomNumber(0,100);                          
//     }
//     cout << endl;
// }


// void PrintArray(int arr[100], int arrLength)
// {
//     // Loop through the array and print each element followed by a space.
//     for (int i = 0; i < arrLength; i++)
//         cout << arr[i] << " ";
    
//     cout << "\n";  // Print a newline after all elements are printed.
// }


// void foundElement(int element, int arr[100], int arrLength){
//     for(int i = 0 ; i< arrLength ; i++){
//         if(arr[i] == element){
//             cout << "The element is found at position " << i << endl;
//             cout << "The element is found at order " << i + 1<< endl;
//             return;
//         }
//     }
//     cout << "The element is not found in the array." << endl;

// }



// int main() {
//     srand((unsigned)time(NULL));
//     int arr[100];      // Declare an array to hold up to 100 integers.
//     int arrLength;     // Variable to store the number of elements in the array.
   

//     ReadArray(arr, arrLength);

//     cout << "\nOriginal array: ";
//     PrintArray(arr, arrLength);

//     foundElement(ReadPositiveNumber("The Number you are looking for : "), arr, arrLength);

   


//     return 0; 

// }    










#include <iostream>   
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


int RandomNumber(int From, int To)
{
    // Generate a random number using the modulus operator.
    // rand() % (To - From + 1) produces a value between 0 and (To - From),
    // then adding From shifts the range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the number of elements from the user.
    
    // Loop through the array from index 0 to arrLength - 1
    // and assign each element a random number between 1 and 100.
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}


void PrintArray(int arr[100], int arrLength)
{
    // Loop through each element of the array and print it.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  // Print a newline after printing all elements.
}



short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    // Loop through each element in the array.
    for (int i = 0; i < arrLength; i++)
    {
        // Check if the current element equals the searched number.
        if (arr[i] == Number)
            return i; // Return the index immediately when the number is found.
    }
    
    // If the loop completes without finding the number, return -1.
    return -1;
}

bool isNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

// Function: ReadNumber
// Purpose: Prompts the user to enter a number to search for.
// Returns: The number entered by the user.
int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}

// Main function: Entry point of the program.
int main()
{
    // Seed the random number generator with the current time.
    // This ensures that a different sequence of random numbers is generated each run.
    srand((unsigned)time(NULL));

    int arr[100];   // Declare an array to hold up to 100 integers.
    int arrLength;  // Variable to store the number of elements in the array.

    // Fill the array with random numbers.
    FillArrayWithRandomNumbers(arr, arrLength);

    // Print the array elements.
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    // Prompt the user for a number to search for.
    int Number = ReadNumber();
    cout << "\nNumber you are looking for is: " << Number << endl;

    // Find the position of the number in the array.
    short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);

    // Output the result.
    if (!isNumberInArray(Number, arr, arrLength))
        cout << "The number is not found :-(\n";
    else
    {
       cout << "yes the number it is found :-) \n";
    }

    return 0;  
}


