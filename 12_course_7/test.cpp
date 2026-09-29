#include <iostream>
#include <fstream>
#include <string>

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
    cout << "Your age is : " << age << endl;
    cout << "Random number between 1 and 100 : " << RandomNumber(1, 100) << endl;
 
    return 0;
}
