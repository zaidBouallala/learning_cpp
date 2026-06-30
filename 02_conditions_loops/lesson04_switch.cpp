#include <iostream>
using namespace std;

int main()
{
    /*
    switch (expression) {
        case constant1:
            // code to be executed if expression equals constant1
            break;
        case constant2:
            // code to be executed if expression equals constant2
            break;
        ...
        default:
            // code to be executed if expression doesn't match any case
    }  
            break :  statement is used to exit the switch statement after a case has been executed. If break is omitted, the program will continue to execute the next case(s) until it encounters a break or reaches the end of the switch statement.
            default :  case is optional and can be used to handle cases where the expression doesn't match any of the specified cases. If no default case is provided and the expression doesn't match any case, the switch statement will simply do nothing and continue executing the code after the switch block.

    */

    int day = 5;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            
        case 2:
            cout << "Tuesday" << endl;
            
        case 3:
            cout << "Wednesday" << endl;
            
        case 4:
            cout << "Thursday" << endl;
           
        case 5:
            cout << "Friday" << endl;
           
        case 6:
            cout << "Saturday" << endl;
          
        case 7:
            cout << "Sunday" << endl;
            
        default:
            cout << "Invalid day. Not a weekday." << endl;
    }






return 0;
}