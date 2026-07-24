#include <iostream>
using namespace std;
int main()
{
int a = 10;
int b = 20 ;
int * pB = &b;

int *ppB =  pB;



cout <<"a value = " << b << endl;
cout <<"a value = " << *pB << endl;
cout <<"a value = " << ppB << endl;
cout <<"a value = " << *ppB << endl;



cout <<"a value = " << a << endl;
cout <<"a value = " << a << endl;



cout <<"a value = " << a << endl;
cout << "a address = "<< & a << endl;
int * p;
p = &a;
cout << "Pointer Value = " << p << endl;
cout << "Pointer Address = " << &p << endl;
cout << "Pointer Address = " << *p << endl;
return 0;
}



/*

Definition:
A pointer is a special type of variable that holds the memory address of another variable, allowing indirect access to the value stored at that memory location.


Example :
#include <iostream>
using namespace std;
int main() {
    int a = 10;   // Declare an integer variable 'a' and initialize it with 10
    cout << a << endl;   // Print the value stored in 'a' (10)
    cout << &a << endl;  // Print the memory address of 'a'
    int *p = &a;         // Declare a pointer 'p' that stores the address of 'a'
    cout << p;           // Print the address stored in 'p' (same as &a)
    return 0;
}

Tracing Tables:

Trace 1: After int a = 10;
        MEMORY

+-----------+
| Name : a  |
+-----------+
|    10     |
+-----------+
Address:
000000469851FC54


Trace 2: After int *p = &a;
   MEMORY

+-----------+
| Name : a  |
+-----------+
|    10     |
+-----------+
Address:
000000469851FC54
      ^
      |
      |
+----------------------+
| Name : p             |
+----------------------+
| 000000469851FC54     |
+----------------------+
Address:
000000FD98533A54



Trace Table
+----------+----------------------+----------------------+
| Variable | Value                | Address              |
+----------+----------------------+----------------------+
| a        | 10                   | 000000469851FC54     |
| p        | 000000469851FC54     | 000000FD98533A54     |
+----------+----------------------+----------------------+
Output
10
000000469851FC54
000000469851FC54

Explanation:

a stores 10.
&a gives the address of a → 000000469851FC54.
p stores the address of a.
Printing p prints the same address stored in p (which is printing the address of variable a in this case).



*/