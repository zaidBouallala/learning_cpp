#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify standard function calls.



void FillArray(int arr[100], int &arrLength)
{
    arrLength = 10;
   arr[0] = 10;
   arr[1] = 10;
   arr[2] = 10;
   arr[3] = 50;
   arr[4] = 50;
   arr[5] = 70;
   arr[6] = 70;
   arr[7] = 70;
   arr[8] = 70;
   arr[9] = 90;
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


void CopyDistinctElements(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    // Loop through each element of the source array.
    for (int i = 0; i < arrLength; i++)
    {
        if(!isNumberInArray(arrSource[i], arrDestination, arrDestinationLength))  // Check if the current element is not already in the destination array.
        {
            // Use AddArrayElement to copy the element to the destination array and update its length.
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
    }
        // Use AddArrayElement to copy the element to the destination array and update its length.
}

// Main function: Program entry point.
int main() {
    // Seed the random number generator with the current time.
    // This ensures that different sequences of random numbers are generated each time the program runs.
    srand((unsigned)time(NULL));

    int arr[10];         // Declare the source array with capacity for 100 integers.
    int arrLength;      // Variable to store the number of elements in the source array.
    FillArray(arr, arrLength);  // Fill the source array with random numbers.
    // Fill the source array with random numbers.
   

    int arr2[100];        // Declare the destination array for the copied elements.
    int arr2Length = 0;     // Initialize the destination array length to 0.

    // Copy elements from the source array into the destination array using AddArrayElement.
    CopyDistinctElements(arr, arr2, arrLength, arr2Length);

    // Print the source array elements.
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    // Print the destination array elements after copying.
    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arr2Length);

    return 0;  // Return 0 to indicate successful program execution.
}