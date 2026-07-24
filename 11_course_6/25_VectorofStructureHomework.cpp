#include <vector>
#include <iostream>
using namespace std;
struct stEmployee
{
string FirstName;
string LastName;
float Salary;
};

void PrintEmployee(stEmployee Employee)
{
    cout << "FirstName: " << Employee.FirstName << endl;
    cout << "LastName : " << Employee.LastName << endl;
    cout << "Salary : " << Employee.Salary << endl;
    cout << endl;
}
void PrintEmployees(vector<stEmployee> &vEmployees)
{
    cout << "Employees Vector: \n\n";
    for (stEmployee &Employee : vEmployees) {
        PrintEmployee(Employee);
    }
    cout << endl;
}


void readEmployees(vector<stEmployee> &vEmployees)
{
    stEmployee tempEmployee;
    char stop = 'n';
    int i = 0;
    do{
        cout << "Please enter the first name of employee " << i + 1 << ": ";
        cin >> tempEmployee.FirstName;
        cout << "Please enter the last name of employee " << i + 1 << ": ";
        cin >> tempEmployee.LastName;
        cout << "Please enter the salary of employee " << i + 1 << ": ";
        cin >> tempEmployee.Salary;
        vEmployees.push_back(tempEmployee);
        i++;
        cout << "Do you want to enter another employee? (y/n): ";
        cin >> stop;
    } while (stop == 'y' || stop == 'Y');
}
int main()
{
    vector <stEmployee> vEmployees;
    readEmployees(vEmployees);
    PrintEmployees(vEmployees);


    return 0;
}