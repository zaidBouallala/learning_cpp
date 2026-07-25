#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int> num{ 1, 2, 3, 4, 5 };
cout << "\n\n using .at(i) \n";
cout << "Element at Index 0: " << num.at(0) << endl;
cout << "Element at Index 2: " << num.at(2) << endl;
cout << "Element at Index 4: " << num.at(4) << endl;
//cout << "Element at Index 5: " << num.at(5) << endl;
// The above line will throw an exception because the index is out of range
cout << "\n\n using [i]\n";
cout << "Element at Index 0: " << num[0] << endl;
cout << "Element at Index 2: " << num[2] << endl;
//cout << "Element at Index 4: " << num[5] << endl;
// The above line will not throw an exception but will lead to undefined behavior because the index is out of range
return 0;
}