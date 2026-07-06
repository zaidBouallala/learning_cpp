#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify standard function calls.

enum enPimeNotPrime { Prime = 1, NotPrime = 2 };  // Define an enumeration for prime and not prime numbers.
 
int RandomNumber(int From, int To)
{
    // rand() % (To - From + 1) gives a value between 0 and (To - From),
    // adding From shifts it into the range [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the desired number of elements.

    // Loop through each index from 0 to arrLength - 1.
    // Fill each array element with a random number between 1 and 100.
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

enPimeNotPrime CheckPrime(int Number)
{
    // Check if the number is prime.
    if (Number < 2)
        return enPimeNotPrime::NotPrime;  // Return NotPrime for numbers less than 2.

    for (int i = 2; i <= Number / 2; i++)
        if (Number % i == 0)
            return enPimeNotPrime::NotPrime;  // Return NotPrime if the number is divisible by any number from 2 to Number/2.

    return enPimeNotPrime::Prime;  // Return Prime if the number is not divisible by any number from 2 to Number/2.
}


void PrintArray(int arr[100], int arrLength)
{
    // Loop through each element in the array and output it with a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  // Print a newline after printing all elements.
}


void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    arrLength++;                   // Increment the array length to account for the new element.
    arr[arrLength - 1] = Number;     // Store the new element at the new last index.
}


void CopyArrayUsingAddArrayElementOfOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    // Loop through each element of the source array.
    for (int i = 0; i < arrLength; i++)
        if(CheckPrime(arrSource[i]) == enPimeNotPrime::Prime)  // Check if the current element is prime.
        AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
}

// Main function: Program entry point.
int main() {
    // Seed the random number generator with the current time.
    // This ensures that different sequences of random numbers are generated each time the program runs.
    srand((unsigned)time(NULL));

    int arr[100];         // Declare the source array with capacity for 100 integers.
    int arrLength = 0;      // Variable to store the number of elements in the source array.
    
    // Fill the source array with random numbers.
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];        // Declare the destination array for the copied elements.
    int arr2Length = 0;     // Initialize the destination array length to 0.

    // Copy elements from the source array into the destination array using AddArrayElement.
    CopyArrayUsingAddArrayElementOfOddNumbers(arr, arr2, arrLength, arr2Length);
    

    // Print the source array elements.
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    // Print the destination array elements after copying.
    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arr2Length);

    return 0;  // Return 0 to indicate successful program execution.
}