#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 , s2 , s3;
    cout << "Please enter string 1 : \n";
    cin.ignore(1, '\n'); // Ignore the newline character left in the input buffer
    getline(cin, s1);
    cout << s1 <<endl;
    cout << "Please enter string 2 will be number : ";
    cin>> s2;
    cout << s2 <<endl;

    cout << "Please enter string 3 will be number : ";
    cin >> s3;
    cout << s3 <<endl;

    cout << "*********************************************" << endl;

    cout << "The length of string 1 is: " << s1.length() << endl;
    cout << "Characters at 0, 2, 4 ,7 in s1 are is :  " << s1[0] << ", " << s1[2] << ", " << s1[4] << ", " << s1[7] << endl;

    cout << "Concatenation of strings 2 and 3 is: " << s2 + s3 << endl;

    cout << "the multiplication of the numbers in string 2 and 3 is: " << stoi(s2) * stoi(s3) << endl;



    return 0;
}