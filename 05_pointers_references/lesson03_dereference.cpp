#include <iostream>
using namespace std;

void myFunction(int num1) {
    num1 = 16000;
    cout << "Inside myFunction, became num1 = " << num1 << endl;

}


int main()
{
    int num1;
    num1 = 1000;
    // in c++ when we pass a variable to a function, it is passed by value by default. This means that a copy of the variable is made and used inside the function. Any changes made to the parameter inside the function do not affect the original variable in the calling function.
    // but in javascript, when we pass a variable to a function, it is passed by reference by default. This means that the original variable is used inside the function. Any changes made to the parameter inside the function will affect the original variable in the calling function.
    myFunction(num1);

    cout << "Inside main, num1 = " << num1 << endl;
    cout << "Inside main, num1 Reference = " << &num1 << endl;
}

