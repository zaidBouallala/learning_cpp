#include <vector>
#include <iostream>
using namespace std;


void readNember(vector<int> & vNumbr){
    char stop = 'y';
    do{
        int number;
        cout<<"Enter a number: ";
        cin>>number;
        vNumbr.push_back(number);
        cout<<"Do you want to add another number? (y/n): ";
        cin>>stop;
    } while (stop == 'y' || stop == 'Y');
}


void printNumbers(const vector<int> &vnumbr){
    cout << "Numbers Vector: \n\n";
    // ranged loop
    for (const int & Number : vnumbr) {
        cout << Number << endl;
    }
    cout << endl;
}



int main()
{

    vector <int> vNumbers;
    readNember(vNumbers);
    printNumbers(vNumbers);

return 0;
}