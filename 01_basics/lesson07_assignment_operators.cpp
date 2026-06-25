#include <iostream>
using namespace std;

int main()
{
    int a = 10 , b = 20;
    a += b ;// a = a + b 
    cout << "The value of a after a += b is : " << a << endl;
    
    a -= b ; // a = a- b
    cout << "The value of a after a -= b is : " << a << endl;


    a *= b ; // a = a*b 
    cout << "The value of a after a *= b is : " << a << endl;

    a/= b ; // a = a/b 
    cout << "The value of a after a /= b is : " << a << endl;

    a%=b ; // a = a%b 

    cout << "The value of a after a %= b is : " << a << endl;

    return 0;



}