#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Math Functions in C++ homework" << endl;

    // #16 area of a rectangle using a and d 
    float a, d, area;
    cout << "Enter the value of a : "<< endl;
    cin >> a;
    cout << "Enter the value of d : "<< endl;
    cin >> d;
    area = round(a * sqrt(pow(d,2)-pow(a,2)));
    cout << "The value of the area of the rectangle is : "<< area <<endl;






    return 0;
}
