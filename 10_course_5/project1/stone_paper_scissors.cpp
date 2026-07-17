#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>

using namespace std;

struct stGameResults{
    int countMyWin;
    int countComputerWin;
    int countDrow;
};

enum enRPS {stone = 1, paper = 2, scissors = 3};
int countMyWin = 0;
int countComputerWin = 0;
int countDrow = 0;

string tabs(short numberOfTabs){

}

void showGameOverScreen(){

}

void showFinalGameResults(stGameResults GameResults){

}

short readHowManyRounds(){
    
}

void resetScreen(){}

void startGame(){}

int main()
{
    srand((unsigned)time(NULL));
    startGame();
    return 0;
}



