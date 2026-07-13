#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enRPS {Stone=1 , Paper=2 , Scissors=3};
 int countMyWin=0;
 int countComputerWin=0;
 int countDraw=0;

 int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int Rounds()
{   
    int round;
    cout<<"How many rounds 1 to 10 ?"<<endl;
    do 
    {
    cin >> round;
    } while(round < 1 || round > 10);
  
    return round;
}

