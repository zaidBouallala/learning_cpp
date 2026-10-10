#include <iostream>
#include <iomanip>

using namespace std;
int RandomNumber(int from, int to ){
    return rand() % (to - from + 1) + from;
}

void FillMatrixWithRandomNumbers(int matrix[3][3],short rows, short cols){
    for(short i = 0; i < rows ; i++){
        for(short j = 0; j < cols ; j++){
            matrix[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int matrix[3][3], short rows, short cols){
    for(short i = 0; i < rows ; i++){
        for(short j = 0; j < cols ; j++){
            cout << setw(3) << matrix[i][j] << "    ";
        }
        cout << endl;
    }

}
int sumForEachRow(short row,short rows, int arr[3][3]){
    int sum = 0; 
    for(short i = 0 ; i < rows ; i++)
    sum += arr[row][i];

    return sum;
}
 
void printSum(int arr[3][3], short rows, short cols){
    for(short i = 0; i < rows ; i++){
        cout << "the sum for the row " << i+1 << " is : " << sumForEachRow(i, rows, arr) << endl ;
    }
}

int main()
{
    // seeds the random numver generator in c++, called only once.
    srand((unsigned)time(NULL));
    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "The following is the matrix filled with random numbers between 1 and 100: " << endl;
    PrintMatrix(arr, 3,  3);

    cout << "the sum for the row 1 is : " << sumForEachRow(0, 3,arr) << endl ;
    cout << "the sum for the row 2 is : " << sumForEachRow(1, 3,arr) << endl ;
    cout << "the sum for the row 3 is : " << sumForEachRow(2, 3,arr) << endl ;
}