#include <iostream>
using namespace std;

int main()
{
    // The continue statement is used to skip the current iteration of a loop and move on to the next iteration.
    /* Example of continue statement 
    while (condition) {
        // code to be executed
        if (some_condition) {
            continue; // Skip the rest of the loop body and move to the next iteration
        }
        // more code to be executed
    }
    */
for(int i =1 ;i<= 5; i++){
    //condition to continue the loop
    if(i == 3){
        continue; // Skip the rest of the loop body and move to the next iteration
    }
    cout << "i = " << i << endl;
}

}