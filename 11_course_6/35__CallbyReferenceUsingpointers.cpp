#include <iostream>
using namespace std;
void swap(int *n1, int *n2)
{
int temp;
temp = *n1;
*n1 = *n2;
*n2 = temp;
}
int main()
{
int a = 1, b = 2;
cout << "Before swapping" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
swap(&a, &b);
cout << "\nAfter swapping" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;



int A = 5 ,*p1 = &A;
int **p2 = &p1; 
cout << *p2 << endl ;
cout << &p1 ;
return 0;
}