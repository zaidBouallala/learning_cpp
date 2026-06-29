#include <iostream>
using namespace std;



int mySumFunction(int a, int b){
    return a + b;
}

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int result = mySumFunction(num1, ++num2);
    cout << "The sum from the function is: " << result << endl;
    cout << "The sum from the function is: " << result << endl;
    cout << "The sum from the function is: " << result << endl;
    cout << "The sum from the function is: " << result << endl;
    return 0;
}