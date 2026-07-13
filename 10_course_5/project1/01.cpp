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
void RoundLength(int round)
{  

     for(int i = 1 ;i <= round;i++)
    {
      cout<<"Round ["<<i<<"] begins:"<<endl;
    }
}

enRPS MyChoice()
{
    int choice;
    cout<<"Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors ?"<<endl;
    cin>>choice;
    choice=(enRPS)choice;
    while(choice < 1 || choice > 3)
    {
    cout << "Invalid Choice, enter again: ";
    cin >> choice;
    }
    if(choice==enRPS::Stone)
      return enRPS::Stone; 

    else if(choice==enRPS::Paper)
      return enRPS::Paper;

    else 
      return enRPS::Scissors; 
}
enRPS ComputerChoice()
{
    enRPS computerChoice=(enRPS)RandomNumber(1,3);
    if(computerChoice==enRPS::Stone)
      return enRPS::Stone; 

    else if(computerChoice==enRPS::Paper)
      return enRPS::Paper;

    else 
      return enRPS::Scissors;  
}

int GameRules(enRPS choice,enRPS computerChoice)
{


 if (choice==enRPS::Stone && computerChoice==enRPS::Stone)
  {
  countDraw++;
  system ("color 0E");
  return 0;
  }
 else if (choice==enRPS::Stone && computerChoice==enRPS::Paper)
  {
  countComputerWin++;
  system("color 0C");
  return 2;
  }
 
 else if (choice==enRPS::Stone && computerChoice==enRPS::Scissors)
  {
  countMyWin++;
  system("color 0A");
  return 1;
  }
 else if (choice==enRPS::Paper && computerChoice==enRPS::Stone)
  {
  countMyWin++;
  system("color 0A");
  return 1;
  }
 else if (choice==enRPS::Paper && computerChoice==enRPS::Paper)
  {
  countDraw++;
  system ("color 0E");
  return 0;
  }
    
 else if (choice==enRPS::Paper && computerChoice==enRPS::Scissors)
  {
  countComputerWin++;
  system("color 0C");
  return 2;
  }

 else if (choice==enRPS::Scissors && computerChoice==enRPS::Stone)
  {
  countComputerWin++;
  system("color 0C");
  return 2;
  }
 
 else if (choice==enRPS::Scissors && computerChoice==enRPS::Paper)
  {
  countMyWin++;
  system("color 0A");
  return 1;
  }
 
 else if (choice==enRPS::Scissors && computerChoice==enRPS::Scissors)
  {
   countDraw++;
  system ("color 0E");
  return 0;
  }
  else return 0;
}

string GetChoiceName(enRPS choice)
{
    switch(choice)
    {
        case enRPS::Stone:
            return "Stone";
        case enRPS::Paper:
            return "Paper";
        case enRPS::Scissors:
            return "Scissors";
        default:
            return "Invalid Choice";
    }
}

void PrintResultsForEvreyRound(int round)
{
    for(int i=1;i<=round;i++)
    {
    enRPS computerchoice=ComputerChoice();
    enRPS playerchoice=MyChoice();
    
    cout<<"---------------Round ["<<i<<"]---------------"<<endl;
    cout<<"Player choice: "<<GetChoiceName(playerchoice)<<endl;
    
    cout<<"Computer choice: "<<GetChoiceName(computerchoice)<<endl;
    
    int winner=GameRules(playerchoice,computerchoice);

    if(winner==2)
    cout<<"Round Winner: Computer"<<endl;
    else if(winner==1)
    cout<<"Round Winner: Player"<<endl;
    else
    cout<<"Round Winner: Draw"<<endl;

    }

}

void PrintResults(int round)
{
   cout<<endl;
    cout<<"             GAME OVER          \n"<<endl;
    cout<<"Total Rounds: "<<round<<endl;
    cout<<"Player Wins: "<<countMyWin<<endl;
    cout<<"Computer Wins: "<<countComputerWin<<endl;
    cout<<"Draws: "<<countDraw<<endl;

    if(countComputerWin>countMyWin)
    cout<<"Game Winner: Computer"<<endl;
    else if(countMyWin>countComputerWin)
    cout<<"Game Winner: Player"<<endl;
    else
    cout<<" It's a Draw"<<endl;
}

int main()
{
 
  srand((unsigned)time(NULL));

  int r=Rounds();
  PrintResultsForEvreyRound(r);
  PrintResults(r);


    return 0;
}