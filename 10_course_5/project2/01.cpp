#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

enum enDifLevel{Easy = 1 , Med = 2 , Hard = 3 , Mix = 4};
enum enOpType{ add = 1, Sub = 2, Mult = 3, Div = 4, mix = 5 };
enum enAnswerTrueOrFalse {True= 1 , False = 2};
enum enWinner {Pass = 1 , Fail = 2};

struct stRoundInfo
{
    enDifLevel PlayerChoiceDifLvl;
    enOpType PlayerChoiceOpType;
    short Number1 = 0;
    short Number2 = 0;
    short Answer = 0;
    enAnswerTrueOrFalse Ans_TrueOrFalse;
};

struct stResultFinalGame
{
    short RoundGame = 0;
    string QuetionsLevel = "";
    string OpertionType = "";
    short NumberOfRightAnswer = 0;
    short NumberOfWrongAnswer = 0;
    enWinner Winner;
    string TextPassOrLose = "";
};
short RandNumber(short From, short To)
{
    return rand() % (To - From + 1) + From;
}

short HowManyQuestions()
{
    short howmanyq = 0;
    cout << "How many questions do you want to answer: ";
    cin >> howmanyq;
    return howmanyq;
}