#include <iostream>
using namespace std;


void swapByReference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByReference, x = " << x << ", y = " << y << endl;   

}

int main()
{
    int x ,y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}
