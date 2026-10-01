#include <iostream>
#include <string>

using namespace std;

char getMaxChar(string str){

    char maxChar = str[0];
    for(int i = 1; i < str.length(); i++){
        if(str[i] > maxChar){
            maxChar = str[i];
        }
    }
    return maxChar;
}

int main() {
    string s = "hello world";
    cout << getMaxChar(s) << endl;
}
