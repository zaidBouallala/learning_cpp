#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
//Function to generate a random number
int randNum = rand() % (To - From + 1) + From;
return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
Cols)
{
for (short i = 0; i < Rows; i++)
{
for (short j = 0; j < Cols; j++)
{
arr[i][j] = RandomNumber(1, 100);
}
}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
for (short i = 0; i < Rows; i++)
{
for (short j = 0; j < Cols; j++)
{
cout <<setw(3) << arr[i][j] << " ";
}
cout << "\n";
}
}

void printTheSumForEachRow(int arr[3][3], short rows , short cols){
    for(short i = 0 ;i < rows; i++){
        int sum = 0;
        for(short j = 0 ;j < cols;j++){
            sum += arr[i][j];
        }
        cout << "Row "<< i+1 << " Sum = " << sum <<endl;
    }
}


int main()
{
//Seeds the random number generator in C++, called only once
srand((unsigned)time(NULL));
int arr[3][3];
FillMatrixWithRandomNumbers(arr, 3, 3);
cout << "\n The following is a 3x3 random matrix:\n";
PrintMatrix(arr, 3, 3);
cout << "\n The following are the sum of each row in the matrix : \n";
printTheSumForEachRow(arr, 3,3);

system("pause>0");

}