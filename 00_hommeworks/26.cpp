#include <iostream>
#include <cmath>
using namespace std;

void readArrayData(float arr[3]){
    
    cout << "Enter the first number: ";
    cin >> arr[0];
    cout << "Enter the second number: ";
    cin >> arr[1];
    cout << "Enter the third number: ";
    cin >> arr[2];

}


float myFunction(float arr[3]) {
   return ( arr[0] + arr[1] + arr[2] ) / 3;
}

void printArrayData(float arr[3]){
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    float result = round(myFunction(arr));
    cout << "The average from the function is: " << result << endl;
}


int main(){

    float Grades[3];
    readArrayData(Grades);
    printArrayData(Grades);


    return 0;
}   