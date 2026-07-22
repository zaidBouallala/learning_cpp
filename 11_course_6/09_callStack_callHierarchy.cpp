#include <iostream>
using namespace std;
// Call Stack and Call Hierarchy Example
// In this example, we have defined four functions: Function1, Function2, Function3, and Function4. Each function calls the next function in the hierarchy, creating a call stack. The output will show the order of function calls and returns, demonstrating how the call stack works in C++.
void Function4()
{
cout << "Hi I'm function4 " << endl;
}
void Function3()
{
Function4();

cout << "Hi I'm function3 " << endl;

}
void Function2()
{
Function3();

cout << "Hi I'm function2 " << endl;
}
void Function1()
{
Function4();
Function2();

cout << "Hi I'm function1 " << endl;
}



int main() {
Function1();

return 0;
}