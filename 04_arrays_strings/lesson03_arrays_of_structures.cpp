#include <iostream>
using namespace std;

struct strInfo
{
   string firstName;
   string lastName;
    int age;
    string phone; 
};
int main()
{

    strInfo persons[2];
    persons[0].firstName = "John";
    persons[0].lastName = "Doe";
    persons[0].age = 30;
    persons[0].phone = "+1234567890";

    persons[1].firstName = "Jane";
    persons[1].lastName = "Smith";
    persons[1].age = 25;
    persons[1].phone = "+0987654321";

    cout << "Person 1: " << persons[0].firstName << " " << persons[0].lastName << ", Age: " << persons[0].age << ", Phone: " << persons[0].phone << endl;
    cout << "Person 2: " << persons[1].firstName << " "<< persons[1].lastName << ", Age: " << persons[1].age << ", Phone: " << persons[1].phone << endl;    
    
    return 0;
}