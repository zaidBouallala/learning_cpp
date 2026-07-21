#include <iostream>
#include "myFirestLb.h"
#include "myInputLib.h"

using namespace std;

int main()
{
    MYLib::Test();

    cout << "Sum of 10 + 20 = " << MYLib::sum(10,20) << endl;

    int num1 = myInputLib::readNumber();
    int num2 = myInputLib::readNumber();

    cout << "Sum of " << num1 << " + " << num2 << " = " << MYLib::sum(num1,num2) << endl;
}