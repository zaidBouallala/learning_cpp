#include <iostream>
using namespace std;


int main()
{
    /*
    if(condition)
    {
        // code to be executed if the condition is true
    }
   after the if statement, the code will continue to execute regardless of whether the condition was true or false.
    */

    int x = 10 , y = 5;
    if(x>5){
        cout << "x is greater than 5" << endl;
    }
   cout << "This line will always be executed" << endl;


    if(x>5 && x<8){
        cout << "x is greater than 5 and less than 8" << endl;
    }
   cout << "This line will always be executed" << endl;

/*
if(condition)
{
    // code to be executed if the condition is true
}
else
{
    // code to be executed if the condition is false
}
*/

if(y>5){
    cout << "yes, y is greater than 5" << endl;
}else{
    cout << "No, y is not greater than 5" << endl;
}

    return 0;
}