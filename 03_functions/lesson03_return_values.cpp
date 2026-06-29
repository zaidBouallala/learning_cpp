#include <iostream>
#include <cmath>
using namespace std;


void myFunctionP()
{
    cout << "This is my first print value function, this is the value." << endl;
}

string myFunction()
{
    return "This is my first returning value function, this is the value.";
}
float myFunction3()
{
    float x = 5.3;
    float y = 10.1;
    return x * y;
}


int main()
{
    float result = ceil(myFunction3()  * 50) ;
    myFunctionP();
    cout << myFunction() << endl;
    cout << "Result: " << result << endl;
    return 0;
}