#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
for (short i = 0; i < Rows; i++)
{
for (short j = 0; j < Cols; j++)
{
//printf(" %0*d ", 2, arr[i][j]);
cout << setw(3) << arr[i][j] << " ";
}
cout << "\n";
}
}

int countZeroInMatrix(int arr[3][3], short Rows, short Cols)
{
    int count = 0;

    for (short i = 0 ;i < Rows ; i++){
        for(short j =0 ; j< Cols ; j++)
        {
            if(arr[i][j] == 0) count++;
        }
    }
    return count;
}

void isSparseMatrix(int arr[3][3], short Rows, short Cols)
{
    int count = countZeroInMatrix(arr, Rows, Cols);
    if(count > (Rows * Cols) / 2)
    {
        cout << "\nYES: Matrix is sparse.";
    }else{
        cout << "\nNO: Matrix is NOT sparse.";
    }
}

int main()
{
int Matrix1[3][3] = { {0,0,12},{9,0,1},{0,0,9} };
cout << "\nMatrix1:\n";
PrintMatrix(Matrix1, 3, 3);
isSparseMatrix(Matrix1, 3, 3);

system("pause>0");
}


