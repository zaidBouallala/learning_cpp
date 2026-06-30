#include <iostream>
using namespace std;



int readIntInRange(int from, int to){
    int number;
    cout << "Please enter a number between " << from << " and " << to << " : ";
    cin >> number;
    while (number < from || number > to) {
        cout<<"wrong Number"<<endl;
        cout << "Invalid input. Please enter a number between " << from << " and " << to << " : ";
        cin >> number;
    }
    return number;
}


int main()
{
    /*
    while(condition (if true)) 
    {
        // code to be executed
    }
    */


    int Number;
    cout << "Please enter a positive integer: ";
    cin >> Number;
    while (Number < 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> Number;
    }
    cout << "You entered: " << Number << endl;



    // Read Number in range 
    int rangeNumber = readIntInRange(1, 10);
    cout << "You entered: " << rangeNumber << endl;

    return 0;

}