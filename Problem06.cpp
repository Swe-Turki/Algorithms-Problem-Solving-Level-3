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

void printMatrix(int arr [3][3], int Row , int Col){
    
    cout << "\nThe following is a 3x3  matrix: " << endl;
    for(int i = 0 ; i < 3 ; i++){

        for (int j = 0 ; j< 3 ; j++){
            cout << setw(3) << arr [i][j] << " " ;
        }
        cout << endl;
    } 
}



int main(){


    int arr[3][3];
    fillMatrix(arr , 3 , 3);
    printMatrix(arr , 3, 3);
}