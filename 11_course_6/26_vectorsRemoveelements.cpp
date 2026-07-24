#include <vector>
#include <iostream>
using namespace std;
int main()
{
vector <int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);
vNumbers.push_back(40);
vNumbers.push_back(50);
cout << "Numbers Vector: \n\n";
cout << "Size of vector: " << vNumbers.size() << endl;
vNumbers.pop_back();
vNumbers.pop_back();
vNumbers.pop_back();
cout << "Size of vector: " << vNumbers.size() << endl;

vNumbers.pop_back();
//vNumbers.pop_back();

cout << "Size of vector: " << vNumbers.size() << endl;

// ranged loop
for (int & Number : vNumbers) {
cout << Number << endl;
}
cout << endl;
return 0;
}