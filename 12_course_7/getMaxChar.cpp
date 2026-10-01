#include <iostream>
#include <string>

using namespace std;
struct King
{
    /* data */
    char theSurvivalKing;
    int hisCrowns;
};


char getMax(string str){
    char theSurvivalKing = str[0];
    int hisCrowns = 0;

    King listOfKings[] = {};

    for(int i = 0; i < str.length(); i++){
    for(int j = i; j < str.length(); j++){
        if(str[i] == str[j]) {
            hisCrowns++;
        }
    }    
        King king;
        king.theSurvivalKing = str[i];
        king.hisCrowns = hisCrowns;
        listOfKings[i] = king;
    }
    cout << "The list of kings: " << endl;
    for(int i = 0; i < 3 ; i++){
        cout << "King: " << listOfKings[i].theSurvivalKing << " has " << listOfKings[i].hisCrowns << " crowns." << endl;
    }
    return theSurvivalKing;
}

int main() {
    string s = "hello world";
    cout << getMax(s) << endl;
}
