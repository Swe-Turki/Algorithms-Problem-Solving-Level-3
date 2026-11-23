#include <iomanip>
#include <iostream>
using namespace std;

int RandomNumber(int From, int To) {
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      arr[i][j] = RandomNumber(1, 10);
    }
  }
}

int SumOfMatrix(int arr[3][3], short Rows, short Cols) {
  int number = 0;
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      number += arr[i][j];
    }
  }
  return number; 
}

bool AreEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
    {
    return (SumOfMatrix(Matrix1, Rows, Cols) == SumOfMatrix(Matrix2, Rows, Cols));
    }

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      printf(" %0*d ", 2, arr[i][j]);
    }
    cout << "\n";
  }
}

int main() {
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));
  int Matrix1[3][3];
  int Matrix2[3][3];
  FillMatrixWithRandomNumbers(Matrix1, 3, 3);
  cout << "\nMatrix1:\n";
  PrintMatrix(Matrix1, 3, 3);
  FillMatrixWithRandomNumbers(Matrix2, 3, 3);
  cout << "\nMatrix2:\n";
  PrintMatrix(Matrix2, 3, 3);

  
  if (AreEqualMatrices(Matrix1, Matrix2, 3, 3))
  cout << "\nYES: both martices are equal.";
  else
  cout << "\nNo: martices are NOT equal." << endl;
  


}