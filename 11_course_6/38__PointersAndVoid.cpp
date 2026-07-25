#include <iostream>

using namespace std;

int main()
{
    void *ptr ;
    int b = 40;
    float a = 10.5;

    ptr = &a;



    cout << "Address of a = " << ptr << endl;
     
    cout << "Value of a = " << *(static_cast<float*>(ptr)) << endl;

    ptr = &b;

    cout << "Address of b = " << ptr << endl;
    cout << "Value of b = " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}