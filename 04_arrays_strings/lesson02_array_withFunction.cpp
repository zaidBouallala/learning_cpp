#include <iostream>
using namespace std;


void ReadArrayData(int x[3]){
    
    cout << "Enter the first number: ";
    cin >> x[0];
    cout << "Enter the second number: ";
    cin >> x[1];
    cout << "Enter the third number: ";
    cin >> x[2];

}

void PrintArrayData(int x[3]){

    cout << "The value of x[0] is: " << x[0] << endl;
    cout << "The value of x[1] is: " << x[1] << endl;
    cout << "The value of x[2] is: " << x[2] << endl;
}

int main()
{
    int x[3];
    ReadArrayData(x);   
    PrintArrayData(x);

    return 0;
}

