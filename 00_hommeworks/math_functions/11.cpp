#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // #21 area of circle using L (sourrounding circle)
    float area , L;
    const float PI = 3.14;

    cout << "Enter the value of L : "<< endl;
    cin >> L;
    area = floor(pow(L,2) / 4 * PI );
    cout << "The value of the area of the circle is : "<< area <<endl;
     

    // #22 area of circle inside a isosceles triangle using a and b
    float a , b;
    cout << "Enter the value of a : "<< endl;
    cin >> a;
    cout << "Enter the value of b : "<< endl;
    cin >> b;
    area = floor(PI * (pow(a,2) * (2*b - a)) / (4 * (2*b + a)));
    cout << "The value of the area of the circle inside a isosceles triangle is : "<< area <<endl;


    





    return 0;
}