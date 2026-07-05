
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

void ReadArray(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the total number of elements the user wishes to input.

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


bool isPrime(int number){
    if(number <= 1) return false;
    for(int i = 2; i <= number / 2; i++){
        if(number % i == 0) return false;
    }
    return true;
}


void copyArrayOfPrimes(int arr[], int arrLength, int copyArr[], int &copyArrLength){
    int  counter = 0;
    for(int i = 0 ; i< arrLength ; i++){
        if(isPrime(arr[i])){
        copyArr[counter] =arr[i];
        counter++;
        }
}
    copyArrLength = counter;
}
       




int main() {
    srand((unsigned)time(NULL));

    int arr[100];      // Declare an array to hold up to 100 integers.

    int arrLength = 0;     // Variable to store the number of elements in the array.
    int copyArr[100];  // Declare another array to hold a copy of the original array.

    int copyArrLength = 0; // Variable to store the number of elements in the copied array.
    ReadArray(arr, arrLength);

    cout << "\nOriginal array: ";

    PrintArray(arr, arrLength);

    copyArrayOfPrimes(arr, arrLength, copyArr,copyArrLength);  // Copy the contents of arr into copyArr.

    cout << "\nCopied array (primes only): ";
    PrintArray(copyArr, copyArrLength);
    return 0; 
}    
