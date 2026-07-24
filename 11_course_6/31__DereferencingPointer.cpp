#include <iostream>
using namespace std;
// derefrencing pointer is the process of accessing the value stored in the address that the pointer is pointing to.
// derefrencing pointer is done using the * operator. 
// if we have a pointer p that is pointing to an address, we can access the value stored in that address by using *p.
int main()
{
int a = 10;
cout <<"a value = " << a << endl;
cout << "a address = "<< & a << endl;
int * p;
p = &a;
cout << "Pointer Value = " << p << endl;
cout << "Value of the address that p is pointing to is " << *p << endl;
*p = 20;
cout << a << endl;
cout << *p << endl;
a = 30;
cout << a << endl;
cout << *p << endl;
cout << endl;
return 0;
}