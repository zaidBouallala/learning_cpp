#include <iostream>
#include <string>
using namespace std;

int main()
{

    string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The value of myString is : " << myString << endl;
    cout << "The value of myString is : " << myString.length() << endl;

    cout << "myString[3] : " << myString[3] << endl;// Accessing the character at index 3 (D)
    cout << "myString[10] : " << myString[10] << endl;// Accessing the character at index 10 (K)

    string s1 = "10" , s2 = "20";
    string s3 = s1 + s2; // Concatenating two strings
    cout << "The value of s3 is : " << s3 << endl; // Output: 1020


    int sum = stoi(s1) + stoi(s2); // Converting strings to integers and adding them
    cout << "The sum of s1 and s2 is : " << sum << endl; // Output: 30



    // read string with spaces using 

string fullName;
// cout << "Enter your full name: ";
// cin>> fullName;
// cout << "Your full name is: " << fullName << endl;


    cout << "Enter your full name: ";
    getline(cin, fullName); // Using getline to read a string with spaces
    cout << "Your full name is: " << fullName << endl;



    return 0;
} 