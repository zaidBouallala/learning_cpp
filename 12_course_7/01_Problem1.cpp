// #include <iostream>
// #include <cmath>
// #include <iomanip>
// #include <cstdlib>


// using namespace std;

// int RandomNumber(int from, int to)
// {
//     int randNum = rand() % (to - from + 1 ) + from;

//     return randNum;
// }

// void readAndFailMarix(int arr[3][3]){
//     for(int i = 0 ;i < 3; i++){
//         for(int j = 0 ;j< 3;j++){
//             arr[i][j]= RandomNumber(0, 100);
//         }
//     }


// }


// void printTheMatrix(int arr[3][3]){
//     cout << "The following is a 3x3 random matrix : " << endl;
//      for(int i = 0 ;i < 3; i++){
//         for(int j = 0 ;j< 3;j++){
//             cout  <<setw(5)<< arr[i][j] << "    " ;
//         }
//         cout << endl;
//     }

// }



// int main()
// {
//     srand((unsigned)time(NULL));

//     int arr[3][3];
//     readAndFailMarix(arr);
//     printTheMatrix(arr);

//     return 0;
// }

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

int main()
{
//Seeds the random number generator in C++, called only once
srand((unsigned)time(NULL));


int arr[3][3];
FillMatrixWithRandomNumbers(arr, 3, 3);
cout << "\n The following is a 3x3 random matrix:\n";
PrintMatrix(arr, 3, 3);
system("pause>0");
}