#include <iostream>

using namespace std;

 void positiveOrNegative(int num)
    {

        string result;
        result = (num >= 0) ? "Positive" : "Negative";
        cout << "The number " << num << " is: " << result << endl;
    }
    void positiveOrNegativeOrZero(int num)
    {

        string result;
        result = (num == 0) ? "Zero" : (num > 0) ? "Positive" : "Negative";
        cout << "The number " << num << " is: " << result << endl;
    }

int main()
{
    positiveOrNegative(55);
    positiveOrNegative(-5);
    positiveOrNegativeOrZero(0);
    positiveOrNegativeOrZero(-10);

    return 0;
}