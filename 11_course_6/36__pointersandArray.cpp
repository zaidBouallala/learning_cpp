#include <iostream>

using namespace std;

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;

    // ptr is equivalennt to &arr[0]
    // ptr + 1 is equivalent to &arr[1]
    // ptr + 2 is equivalent to &arr[2]
    // ptr + 3 is equivalent to &arr[3]

    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;

    cout << "Address of arr[0] = " << &arr[0] <<"  OR  " << ptr << endl;
    cout << "Address of arr[1] = " << &arr[1]  <<"  OR  " << ptr + 1 << endl;
    cout << "Address of arr[2] = " << &arr[2] << "  OR  " << ptr + 2 << endl;
    cout << "Address of arr[3] = " << &arr[3] << "  OR  " << ptr + 3 << endl;


    for (int i = 0; i < 4; i++)
    {
        cout << "Address of arr[" << i << "] = " << &arr[i] << "  OR  " << ptr + i << endl;
    }
    return 0;
}