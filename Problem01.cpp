#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ostream>
using namespace std;


int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void fillMatrix(int arr [3][3] , int Row , int Col){
    int number ;

    for(int i = 0 ; i < Row ; i++){

        for (int j = 0 ; j< Col ; j++){
            arr [i][j] = RandomNumber(1, 100);;
        }
    } 
}

void printMatrix(int arr [3][3], int Row , int Col){
    
    cout << "\nThe following is a 3x3 random matrix: " << endl;
    for(int i = 0 ; i < 3 ; i++){

        for (int j = 0 ; j< 3 ; j++){
            cout << setw(3) << arr [i][j] << " " ;
        }
        cout << endl;
    } 
}



int main(){

    srand((unsigned)time(NULL)); 
    int arr[3][3];
    fillMatrix(arr , 3 , 3);
    printMatrix(arr , 3, 3);
}