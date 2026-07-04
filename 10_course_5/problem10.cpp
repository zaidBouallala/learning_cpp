#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int readPositiveInteger(string prompt){
    int number;
    do{
        cout << prompt;

        cin >> number;
    }while(number <=0);

    return number;
}


int reverseNumber(int number){
    
   int reminder = 0 ,newNumber = 0;
   while(number > 0){
    reminder = number % 10;
   newNumber = newNumber * 10 + reminder;
    number /= 10;
   }
   return newNumber;
}

void printDigits(int number){
   int reminder =  0 ;
   while(number > 0){
    reminder = number % 10;
    cout << reminder << endl;
    number /= 10;
   }
}




int main()
{
   // printDigits(readPositiveInteger("Please enter a positive integer: "));
    printDigits(reverseNumber(readPositiveInteger("Please enter a positive integer: ")));
    return 0;
}

