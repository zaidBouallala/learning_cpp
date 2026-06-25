#include <iostream> 
using namespace std;

int main()
{
    int a ;
    int b ;

    cout << "Plase enter the first 'a' number: ";
    cin >> a;
    cout << "Plase enter the second 'b' number: ";
    cin >> b;

    cout << "a < b: " << (a < b) << endl; // is a less than b? false
    cout << "a > b: " << (a > b) << endl; // is a greater than b? true
    cout << "a == b: " << (a == b) << endl; // is a equal to b? false
    cout << "a != b: " << (a != b) << endl; // is a not equal to b? true
    cout << "a <= b: " << (a <= b) << endl; // is a less than or equal to b? false
    cout << "a >= b: " << (a >= b) << endl; // is a greater than or equal to b? true

    return 0;
}
