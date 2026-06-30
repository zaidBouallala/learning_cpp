#include <iostream>
#include <cmath>
using namespace std;

float myFunction(float arr[3]) {
   return ( arr[0] + arr[1] + arr[2] ) / 3;
}

int main(){

    float Grades[3];
    cout << "Enter the first number: ";
    cin >> Grades[0];
    cout << "Enter the second number: ";
    cin >> Grades[1];
    cout << "Enter the third number: ";
    cin >> Grades[2];

    float result = round(myFunction(Grades));
    cout << "The average from the function is: " << result << endl;

    return 0;
}