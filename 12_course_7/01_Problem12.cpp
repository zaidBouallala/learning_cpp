#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr[i][j]);
            //cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

bool AreTepicalEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}






int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3] , arr2[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(arr1, 3, 3);

    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix2:\n";
    PrintMatrix(arr2, 3, 3);

    if (AreTepicalEqualMatrices(arr1, arr1, 3, 3))
    {
        cout << "\nThe two matrices are equal.\n";
    }
    else
    {
        cout << "\nThe two matrices are not equal.\n";
    }

    system("pause 0");
    return 0;
}