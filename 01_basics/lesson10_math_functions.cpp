#include <iostream>
#include <cmath>

using namespace std;

int main()
{


    // sqrt() 


    double x = 64 ;
    cout <<  "Square root value of 64 : "<< sqrt(x) << endl; // gives 8

    cout <<  "Square root value of 50 : "<< sqrt(50) << endl; // gives 7.07


    // round() down Rounding Numbers l

    cout <<"Round value of 2.4 : " << round(2.4) << endl ; // gives 2 
    cout <<"Round value of 2.5 : " << round(2.5) << endl ; // gives 3
    cout <<"Round value of 2.7 : " << round(2.7) << endl ; // gives 3


    cout << "Square root  value of 50  : " <<sqrt(50) << endl ; // gives 7.07...
    cout <<"Round value of sqrt(50) : " << round(sqrt(50)) << endl ; // gives 7


    // power function pow()

    int a = 2 ; 
    int b = 4 ;

    cout << "the 2 power 4 : " << pow(a , b )<< endl;
    cout << "the 4 power 3 : " << pow(4 , 3 )<< endl;

    // the floor and ceil functions  ceil()   floor()

    cout<< ceil(2.9) << endl;   // gives 3
    cout<< floor(2.9) << endl; // gives 2 


    cout<< ceil(-2.9) << endl; // gives -2
    cout<< ceil(+2.9) << endl; // gives -3 

    // abs() function absolute function


    cout << abs(-10) << endl; // gives 10
    cout << abs(10) << endl; // gives 10
    return 0;
}