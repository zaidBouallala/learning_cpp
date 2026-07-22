#include <iostream>
#include <limits>
#include <string>

using namespace std;

int readNumber()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;
  while(cin.fail()){
    
    cin.clear(); // Clear the error flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    cout << "Invalid input. Please enter a valid number: ";
    cin >> number;
  }
  return number;  
}

int main()
{
   int number = readNumber();
    cout << "You entered : " << number << endl;

    return 0;
}