#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ostream>
using namespace std;


int RandomNumber(int From, int To) { return rand() % (To - From + 1) + From; }

void fillMatrix(int arr [3][3] , int Row , int Col){

    for(int i = 0 ; i < Row ; i++){

        for (int j = 0 ; j< Col ; j++){
            arr[i][j] = RandomNumber(1 , 10);
        }
    } 
}

void MultiplyTwoMatrices(int arr1 [3][3] , int arr2 [3][3], int result [3][3] ,int Row , int Col){

    for (int i = 0 ; i < Row ; i++){

        for (int j = 0 ; j < Col ; j++){
           result [i][j] = arr1 [i][j] * arr2[i][j];
        }
    }

}

void printMatrix(int arr [3][3], int Row , int Col){
    
    
    for(int i = 0 ; i < 3 ; i++){

        for (int j = 0 ; j< 3 ; j++){
            cout << setw(3) << arr [i][j] << " " ;
        }
        cout << endl;
    } 
}



int main(){


    int arr1[3][3];
    int arr2 [3][3];
    int result [3][3];
    fillMatrix(arr1 , 3 , 3);
    fillMatrix(arr2 , 3 , 3);
    MultiplyTwoMatrices(arr1 , arr2 , result, 3 , 3);
    cout << "\nMatrix1 : " << endl;
    printMatrix(arr1 , 3, 3);
    cout << "\nMatrix2 : " << endl;
    printMatrix(arr2 , 3 , 3);
    cout << "\nResult : " << endl;
    printMatrix(result , 3 , 3);
    
}