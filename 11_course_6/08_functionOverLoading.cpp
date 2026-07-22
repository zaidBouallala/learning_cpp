#include <iostream>
using namespace std;

// Function Overloading Example
double MySum2DoubleNumbers(double a, double b) {
return (a + b);
}
int MySum2IntegerNumbers(int a, int b) {
return (a + b);
}
int MySum3IntegerNumbers(int a, int b, int c) {
return (a + b + c);
}
int MySum4IntegerNumbers(int a, int b, int c, int d) {
return (a + b + c + d);
}

// Function Overloading
double MySum(double a, double b) {
return (a + b);
}
int MySum(int a, int b) {
return (a + b);
}
int MySum(int a, int b, int c) {
return (a + b + c);
}
int MySum(int a, int b, int c, int d) {
return (a + b + c + d);
}
// Function Overloading allows us to have multiple functions with the same name but different parameters. The compiler determines which function to call based on the arguments passed to the function.     
// In this example, we have defined multiple functions named MySum with different parameter types and counts. The appropriate function is called based on the arguments provided in the main function.










int main() {
cout << MySum2IntegerNumbers(10, 20) << endl;
cout << MySum2DoubleNumbers(10.1, 20.1) << endl;
cout << MySum3IntegerNumbers(10, 20, 30) << endl;
cout << MySum4IntegerNumbers(10, 20, 30, 40) << endl;

cout << "--------------------" << endl;
cout << MySum(10, 20) << endl;
cout << MySum(10.1, 20.1) << endl;
cout << MySum(10, 20, 30) << endl;
cout << MySum(10, 20, 30, 40) << endl;


return 0;
}