#include <iostream>
#include <string>
using namespace std;

int main()
{
    // from double to int
    int num1;
    double num2 = 18.99;

    num1 = num2; // Implicit conversion from double to int

    num1 = (int)num2; // Explicit conversion using C-style cast

   num1 = int(num2); // Explicit conversion using functional notation

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;


    // from string to int

    string str = "123.456";

    // Convert string to int using stoi
    int num3 = stoi(str);

    cout << "num3 int: " << num3 << endl;

    // convert string to double using stod
    double num4 = stod(str);

    cout << "num4 double: " << num4 << endl;

    // convert string to float using stof
    float num5 = stof(str);
    cout << "num5 float: " << num5 << endl;



    // from int to string
    int num6 = 456;
    string str2 = to_string(num6);
    cout << "str2 from int : " << str2 << endl;


    // from double to string
    double num7 = 789.123;

    string str3 = to_string(num7);

    cout << "str3 from double : " << str3 << endl;

    return 0;
}