#include <iomanip>
#include <iostream>
#include <string>
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
void PrintMatrix(int arr[3][3], short Rows, short Cols) {
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      // printf(" %0*d ", 2, arr[i][j]);
      cout << setw(3) << arr[i][j] << " ";
    }
    cout << "\n";
  }
}
void  MinNumberInMatrix(int Matrix1[3][3], short Rows, short Cols) {
  short MinNumber = Matrix1[0][0] ;
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (Matrix1[i][j] < MinNumber) {
         MinNumber = Matrix1[i][j];
      };
    }
  }
  cout << setw(3) << "Min Number is : " << MinNumber <<  " " << endl;
}

void  MaxNumberInInMatrix(int Matrix1[3][3],short Rows, short Cols) {
    short MaxNumber = Matrix1[0][0] ;
    for (short i = 0; i < Rows; i++) {
      for (short j = 0; j < Cols; j++) {
        if (Matrix1[i][j] > MaxNumber) {
            MaxNumber = Matrix1[i][j];
        };
      }
    }
    cout << setw(3) << "Max Number is : " << MaxNumber <<  " " << endl;
  }


int main() {
    srand((unsigned)time(NULL));
  int Matrix1[3][3];
  FillMatrixWithRandomNumbers(Matrix1, 3, 3);
  cout << "\nMatrix1:\n";
  PrintMatrix(Matrix1, 3, 3);
  MinNumberInMatrix(Matrix1 , 3 ,3);
  MaxNumberInInMatrix(Matrix1 , 3 ,3);

}