// linear search
#include <iostream>
using namespace std;

bool linearSearch(int mat[][3],int rows,int columns,int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            if(mat[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}


int main(){
    int matrix[3][3]= {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = 3;
    int columns = 3;

   cout << linearSearch(matrix, rows, columns, 8) << endl;

    return 0;

}