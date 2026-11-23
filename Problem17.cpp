
#include "../Header Files/MyLib.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int Matrix1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix1[i][j] = RandomNumber(1, 100);
        }
    }
}

bool IsNumberExists(int Matrix1[3][3], short Rows, short Cols, int number)
{
   

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == number)
               return true;
        }
    }

    return false;
}

void PrintMatrix(int Matrix1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %02d ", Matrix1[i][j]);
        }
        cout << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);
    int number = MyLib::ReadNumberWithMessage("\nPlease Enter the number to look for in matrix?");

    if (IsNumberExists(Matrix1 , 3, 3,  number)){
        cout << "\nYes it is there." << endl;
    }
    else {
        cout << "\n No it is NOT there." << endl;
    }


    return 0;
}
