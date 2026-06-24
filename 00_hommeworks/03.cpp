#include <iostream>
using namespace std;

int main()
{
   short int a , b ;
    cout << "Enter the first number: ";
    cin >> a ;
    cout << "Enter the second number: ";
    cin >> b ;


    cout << "The sum of " << a << " and " << b << " is: " << a + b << endl; 
    cout << "The difference of " << a << " and " << b << " is: " << a - b << endl;
    cout << "The product of " << a << " and " << b << " is: " << a * b << endl;
    cout << "The quotient of " << a << " and " << b << " is: " << a / b << endl;
    cout << "The remainder of " << a << " and " << b << " is: " << a % b << endl;
    
    return 0;
}
