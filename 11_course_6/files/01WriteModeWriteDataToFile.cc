#include  <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myfile;
    myfile.open("myfile.txt", ios::out); // open file in write mode

    if (myfile.is_open())
    {
        myfile << "Hello, this is a test file.\n";
        myfile << "Writing data to the file using C++.\n";
        myfile << "This is the third line of the file.\n";
        myfile.close(); // close the file after writing
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
    }
    return 0;
}