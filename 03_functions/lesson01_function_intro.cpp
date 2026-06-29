#include <iostream>
using namespace std;


// a function is a block of code which only runs when it is called.
// youcan pass data, known as parameters, into a function. 
// functions are used to perfprm certain actions, and they are important for 
// reusing code : define the code once, and use it many times ...




void myFunction() {
    cout << "This is my first function, it got executed :-)  " << endl;
}

void myFunction2(){
    cout << "This is my second function, it got executed :-)  " << endl;
}

int main()
{
    myFunction();
    myFunction2();
    return 0;
}