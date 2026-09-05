#include <iostream>
#include <string>

using namespace std;

int randomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void printMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void fillMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = randomNumber(1, 9);
        }
    }
}

void readNember(int &number)
{
    cout << "Enter a number: ";
    cin >> number;
}


int CountNumberInMatrix(int arr[3][3], short Rows, short Cols, int number)
{
    int count = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == number)
            {
                count++;
            }
        }
    }
    return count;
}


int main()
{
    int Matrix[3][3];
    fillMatrix(Matrix, 3, 3);
    cout << "\nMatrix:\n";
    printMatrix(Matrix, 3, 3);
    int number;
    readNember(number);
    int count = CountNumberInMatrix(Matrix, 3, 3, number);
    cout << "\nThe number " << number << " appears " << count << " times in the matrix.\n";

    




    system("pause>0");
    return 0;
}