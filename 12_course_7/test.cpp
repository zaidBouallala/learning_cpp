#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;
int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

int main()
{ 
    srand((unsigned)time(NULL));

    short age ; 
    cout << "Enter your age: "<< endl;
    cin >> age;
    cout << " years old!" << endl;
    cout << "Your age is : " << age << endl;
    cout << "Random number between 1 and 100 : " << RandomNumber(1, 100) << endl;
    cout << "Random number between 1 and 100 : " << RandomNumber(1, 100) << endl;
 
    return 0;
}