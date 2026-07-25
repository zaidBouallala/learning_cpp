#include <iostream>
#include <string>
using namespace std;

struct stEmployee 
{
    string name;
    float salary;
};


int main()
{
    stEmployee emp1 , *ptrEmp1;

    emp1.name = "Zaid";
    emp1.salary = 100077.00;

    cout << "Employee Name = " << emp1.name << endl;
    cout << "Employee Salary = " << emp1.salary << endl;

    ptrEmp1 = &emp1;

    cout << "Employee Name = " << ptrEmp1->name << endl;
    cout << "Employee Salary = " << ptrEmp1->salary << endl;



    return 0;
}