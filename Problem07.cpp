#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ostream>
using namespace std;




void fillMatrix(int arr [3][3] , int Row , int Col){
    int number = 0;

    for(int i = 0 ; i < Row ; i++){

        for (int j = 0 ; j< Col ; j++){
            number++;
            arr[i][j] = number;
        }
    } 
}

void transposeMatrix(int arr [3][3] , int arrTrans [3][3], int Row , int Col){

    for (int i = 0 ; i < Row ; i++){

        for (int j = 0 ; j < Col ; j++){
            arrTrans [j][i] = arr [i][j];
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


    int arr[3][3];
    int arrTrans [3][3];
    fillMatrix(arr , 3 , 3);
    transposeMatrix(arr , arrTrans , 3 , 3);
    cout << "\nThe following is a 3x3  matrix: " << endl;
    printMatrix(arr , 3, 3);
    cout << "\nThe following is the transposed matrix: " << endl;
    printMatrix(arrTrans , 3 , 3);
}