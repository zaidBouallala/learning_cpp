#include <iostream>
#include <string>
using namespace std;

int main()
{
    // convert string st1 = "43.22" to double float and int 

    string st1 = "43.22";
    double d1 = stod(st1); // convert string to double  
    float f1 = stof(st1); // convert string to float
    int i1 = stoi(st1); // convert string to int

    cout << "The value of d1 is : " << d1 << endl;
    cout << "The value of f1 is : " << f1 << endl;
    cout << "The value of i1 is : " << i1 << endl;

    // convert intger n1 = 20 to string 

    int n1 = 20;
    string st2 = to_string(n1); // convert int to string
    cout << "The value of st2 is : " << st2 << endl;


    // convert double n2 = 33.5 to string
    double n2 = 33.5;
    string st3 = to_string(n2); // convert double to string
    cout << "The value of st3 is : " << st3 << endl;


    // convert float n3 = 44.5 to string
    float n3 = 55.23;
    string st4 = to_string(n3); // convert float to string
    cout << "The value of st4 is : " << st4 << endl;
    // convert float n3 = 44.5 to intger

    // implicit conversion from float to int
    int n4 = n3; // implicit conversion from float to int

    cout << "The value of n4 is : " << n4 << endl;

    // explicit conversion from float to int
    int n5 = (int)n3; // explicit conversion from float to int

    int n6 = int(n3); // explicit conversion from float to int  
    cout << "The value of n5 is : " << n5 << endl;
    cout << "The value of n6 is : " << n6 << endl;



    return 0;
}