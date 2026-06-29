#include <iostream>
using namespace std;


void displayMyCardInfo()
{
 cout << "**************************************" << endl;
	cout << "Name : zaid bouallala\n";
	cout << "Age : 24 years old \n";
	cout << "City : el kelaa des sraghna  \n";
	cout << "Country : morroco\n";
   cout << "**************************************" << endl;
};

void printSquareStars()
{
    
   cout << "********" << endl;
   cout << "********" << endl;
   cout << "********" << endl;
   cout << "********" << endl;
}

void printIloveProgramming()
{
    cout << "THIS is my first  c++ program!\n";
   cout << "I am learning C++ programming language.\n";
   cout << "10 + 5 = " << 10 + 5 << endl;
}

void printH(){
    cout << "*     *" << endl;
    cout << "*     *" << endl;
    cout << "*******" << endl;
    cout << "*     *" << endl;
    cout << "*     *" << endl;
}


int main()
{
    displayMyCardInfo();
    printSquareStars();
    printIloveProgramming();
    printH();
    return 0;
}