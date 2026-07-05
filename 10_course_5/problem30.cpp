
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

void sumElements(int arr1[],int arr2[], int arrLength , int sumArr[]){
   
    for(int i = 0 ; i< arrLength ; i++)
      sumArr[i]= arr1[i] + arr2[i];
} 



int main() {
    srand((unsigned)time(NULL));
    int arr1[100];      // Declare an array to hold up to 100 integers.
    int arr2[100];      // Declare an array to hold up to 100 integers.
    int arrLength;     // Variable to store the number of elements in the array.
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the total number of elements the user wishes to input.

    ReadArray(arr1, arrLength);
    ReadArray(arr2, arrLength);

    cout << "\narray 1 : "; 
    PrintArray(arr1, arrLength);
    cout << "\narray 2 : ";
    PrintArray(arr2, arrLength);

    int sumArr[100];
    sumElements(arr1, arr2, arrLength, sumArr);
    cout << "\narray sum : ";
    PrintArray(sumArr, arrLength);
    return 0; 

}    
