#include <iostream>
using namespace std;

void sumProcedure(){
    int a , b ;
    cout << "Enter the first number: ";
    cin >> a ;
    cout << "Enter the second number: ";
    cin >> b ;

    cout << "The sum is: " << a + b << endl;
}

int mySumFunction(){
    int a , b ;
    cout << "Enter the first number: ";
    cin >> a ;
    cout << "Enter the second number: ";
    cin >> b ;

    return a + b;
}

int main()
{
    sumProcedure();
    int result = mySumFunction();
    cout << "The sum from the function is: " << result << endl;
    return 0;
}