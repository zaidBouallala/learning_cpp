#include <iostream>
using namespace std;
void PrintNumbersFromNtoM(int N, int M)
{
if (N <= M)
{
cout << M << endl;
PrintNumbersFromNtoM(N , M-1);
}
}
int main() {
PrintNumbersFromNtoM(1, 11);
return 0;
}