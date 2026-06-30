#include <iostream>
using namespace std;


int main()
{
    /*
    if(condition 1){
        // code to be executed if condition 1 is true
    }else if(condition 2){  
    
        // code to be executed if condition 2 is true
    }else if(condition 3){
        // code to be executed if condition 3 is true

    }else{
        // code to be executed if all conditions are false

    }
    
    */

    int time = 22;
    if (time < 10) {
        cout << "Good morning." << endl;
    } else if (time < 20) {
        cout << "Good day." << endl;
    } else {
        cout << "Good evening." << endl;
    }                   


    return 0;
}