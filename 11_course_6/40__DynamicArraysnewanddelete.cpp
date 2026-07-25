#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number of students : " << endl;
    cin >> num;

    float * ptr;
    // dynamically allocate memory 
    ptr = new float[num];

    cout << "Enter the marks of students : " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << " : ";
        cin >> ptr[i];
    }

    cout << "Marks of students are : " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << " : " << ptr[i] << endl;
    }

    // deallocate the memory
    delete[] ptr;


    return 0;
}