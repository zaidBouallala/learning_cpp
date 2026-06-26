#include <iostream>
#include <cmath>    

using namespace std;

int main()
{
    cout << "Math Functions in C++ homework" << endl;

    // #18 area of circle using r
    float r, area;
    const float PI = 3.14;
    cout << "Enter the value of r : "<< endl;
    cin >> r;
    area = ceil(PI * pow(r,2)); 
    cout << "The value of the area of the circle is : "<< area <<endl;


    // #19 area of circle using D

    float D;
    cout << "Enter the value of D : "<< endl;
    cin >> D;
    area = ceil(PI * pow(D,2) / 4);
    cout << "The value of the area of the circle is : "<< area <<endl;



    // #20 area of circle inside a square using A

    float A;
    cout << "Enter the value of A : "<< endl;
    cin >> A;
    area = ceil(PI * pow(A,2) / 4);
    cout << "The value of the area of the circle inside a square is : "<< area <<endl;



    

    return 0;
}