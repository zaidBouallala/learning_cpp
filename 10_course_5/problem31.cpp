
#include <iostream>   // Include the iostream library for input/output operations.
#include <cstdlib>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to common functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number.
//          It repeatedly asks until the user inputs a number greater than zero.
// Parameter: Message - a string containing the prompt to display.
// Returns: A positive integer entered by the user.

int RandomNumber(int From, int To)
{
    // Generate a random number between 0 and (To - From), then add From to shift the range.
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl; // Display the prompt message.
        cin >> Number;           // Read the number entered by the user.
    } while (Number <= 0);       // Continue prompting if the number is not positive.
    
    return Number;  // Return the validated positive number.
}

void ReadArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
       
        arr[i]= RandomNumber(0,100);                          
    }
    cout << endl;
}


void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    
    cout << "\n";  // Print a newline after all elements are printed.
}

void Swap(int &a, int &b)
{
    int temp = a; // Store the value of 'a' in a temporary variable.
    a = b;        // Assign the value of 'b' to 'a'.
    b = temp;     // Assign the value stored in 'temp' (original 'a') to 'b'.
}

void shuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        int randomIndex = RandomNumber(0, arrLength - 1); // Generate a random index within the array bounds.
        Swap(arr[i], arr[randomIndex]); // Swap the current element with the element at the random index.
    }
}


int main() {
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100];
         // Declare an array to hold up to 100 integers.
    int arrLength = ReadPositiveNumber("Enter the number of elements in the arrays: ");  // Read the desired length of the arrays from the user.

    ReadArray(arr1, arrLength);

    cout << "\narray 1 : ";
    PrintArray(arr1, arrLength);
    shuffleArray(arr1, arrLength);
    cout << "\narray 1 after shuffle : ";
    PrintArray(arr1, arrLength);
  
   
    return 0; 

}    
