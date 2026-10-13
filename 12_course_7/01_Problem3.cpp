#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int RandomNumber(short from, short to)
{
    int RandNumber = rand() % (to - from + 1) + from;
    return RandNumber;
}

void FillMatrixWithRandomNumbres(int arr[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            arr[i][j] = RandomNumber(0, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            cout << setw(3) << arr[i][j] << "        ";
        }
        cout << endl;
    }
}

int SumForEachRow(int arr[3][3] , short cols, short RowNumber)
{
    int res = 0;

    for (short j = 0; j < cols; j++)
    {
        res += arr[RowNumber][j];
    }

    return res;
}

void FillSumArray(int arr[3][3], int sum[3], short cols)
{
    for (short i = 0; i < cols; i++)
    {
        sum[i] = SumForEachRow(arr, 3, i);
    }
}

void PrintSumArray(int sum[3], short rows)
{
    for (short i = 0; i < rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << sum[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int sumArr[3];

    FillMatrixWithRandomNumbres(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
    cout << endl << "The sum result is : " << endl;
    FillSumArray(arr, sumArr, 3);
    PrintSumArray(sumArr, 3);

    return 0;
}
