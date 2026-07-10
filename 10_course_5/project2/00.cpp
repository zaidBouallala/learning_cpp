#include <iostream>
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

enDifLevel ChooseDiflevel()
{
    short choice = 0;
    do
    {
        cout << "Enter difficulty level [1]Easy [2]Medium [3]Hard [4]Mix ";
        cin >> choice;
    }while(choice < 1 || choice > 4);
    return (enDifLevel) choice;
}

enOpType ChooseQuestionType()
{
    short choice = 0;
    do
    {
        cout << "Enter questions type [1]Add [2]Sub [3]Mult [4]Div [5]Mix ";
        cin >> choice;
    }while(choice < 1 || choice > 5);;
    return (enOpType) choice;
}

stRoundInfo ReadChoices()
{
    stRoundInfo Round;

    Round.PlayerChoiceOpType = ChooseQuestionType();
    Round.PlayerChoiceDifLvl = ChooseDiflevel();

    return Round;
}

short GenerateNumbers(enDifLevel level)
{
    switch (level)
    {

        case Easy: return RandNumber(1,10);
        case Med: return RandNumber(10,50);
        case Hard: return RandNumber(50,100);
        case Mix: return RandNumber(1,100);

    }
}

enOpType GenerateOperation(enOpType op)
{
    if(op == mix)
        return (enOpType)RandNumber(1,4);
    
    return op;
}

short CalculateAnswer(short n1, short n2, enOpType op)
{
    switch(op)
    {
        case add: return n1 + n2;
        case Sub: return n1 - n2;
        case Mult: return n1 * n2;
        case Div: return n1 / n2;
    }
}


void printQuestion(stRoundInfo &Round)
{
    Round.Number1 = GenerateNumbers(Round.PlayerChoiceDifLvl);
    Round.Number2 = GenerateNumbers(Round.PlayerChoiceDifLvl);
    Round.PlayerChoiceOpType = GenerateOperation(Round.PlayerChoiceOpType);

     cout << "\nWhat is: " << Round.Number1;

    switch(Round.PlayerChoiceOpType)
    {
        case add: cout << " + "; break;
        case Sub: cout << " - "; break;
        case Mult: cout << " * "; break;
        case Div: cout << " / "; break;
    }

    cout << Round.Number2 << " ?\n";
}

void CheckAnswer(stRoundInfo &Round)
{
    int correct = CalculateAnswer(Round.Number1,Round.Number2,Round.PlayerChoiceOpType);

    cout << "Your answer: ";
    cin >> Round.Answer;

    if(Round.Answer == correct)
    {
        system("color 2E");
        Round.Ans_TrueOrFalse = True;
        cout << Round.Answer << " Is the correct answer";
    }
    else
    {
        system("color 4F");
        Beep(500,500); 
        Round.Ans_TrueOrFalse = False;
        cout << Round.Answer << " Is wrong!\nCorrect answer is " << correct << endl;
    }
}

void Game()
{
    short questions = HowManyQuestions();

    short right = 0; short wrong = 0;

    stRoundInfo Round = ReadChoices();

    for(int i = 1; i <= questions; i++)
    {
        cout << "\nQuestion [" << i << "/" << questions << "]\n";

        

        printQuestion(Round);
        CheckAnswer(Round);

         if(Round.Ans_TrueOrFalse == True)
            right++;
        else
            wrong++;
               
    }

    cout << "\nGame Over!\n";
    cout << "Right Answers: " << right << endl;
    cout << "Wrong Answers: " << wrong << endl;
    if(right >= wrong)
    {
    cout << "\n_________________________________________________________________________[YOU PASSED!]__________________________________________________________________________";
    system("color 2E");
    }
    else
    {
    Beep(500,300); 
    Beep(500,300);
    Beep(500,300);
    cout << "\n_________________________________________________________________________[YOU FAILED!]__________________________________________________________________________";
    system("color 4F");
    }    
}
bool AskIfPlayerWantsToPlayAgain()
{
    string ans ;
    cout << "\n\nDo You Want To Play Again [Yes] or [No] ? ";
    cin >> ans;
    if(ans == "Yes" || ans == "y" || ans == "Y" || ans == "yes")
    return true;
    else if(ans == "No" || ans == "n" || ans == "N" || ans == "no")
    return false;
    
}
void PlayGame()
{
    do
    {
        system("cls");
        system("color 07");
        Game();

    }while(AskIfPlayerWantsToPlayAgain());

    cout << "\n_________________________________________________________________________[Game Closed]__________________________________________________________________________";
}

int main()
{
    srand((unsigned)time(NULL));
    PlayGame();
}