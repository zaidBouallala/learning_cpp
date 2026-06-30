#include <iostream>

using namespace std;

int ReadIntInRange(int from, int to){
    int number;
    do {
        if (number < from || number > to) {
            cout << "Please enter a number between " << from << " and " << to << " : ";
            cin >> number;
        }
    } while (number < from || number > to);
    return number;
}

int main()
{
    /*
    do {
        // code to be executed
    } while (condition (if true));
     in the do-while loop, the code block is executed at least once before the condition is checked.
     in the while loop, the code block may not be executed at all if the condition is false from the beginning.
    
    */

    int i = 6;
    do{
        cout << "zaid bouallala \ni = " << i << endl;
        i++;
    }while(i <= 5);

    int number = ReadIntInRange(1, 10);
    cout << "You entered: " << number << endl;

    return 0;
}