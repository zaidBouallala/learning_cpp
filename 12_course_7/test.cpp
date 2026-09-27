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
    short age ; 
    cout << "Enter your age: "<< endl;
    cin >> age;
    cout << "Your age is : " << age << endl;
    cout << "Your age is : " << age << endl;
    return 0;
}
