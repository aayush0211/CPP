// 3X3 Matrix multiplication.

#include<iostream>
using namespace std;

const int row = 3;
const int cols = 3;
void input(int mat1[row][cols], int mat2[row][cols]){
    cout << "Enter elements of first matrix : \n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < cols;j++){
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of 2nd matrix: \n";
      for (int i = 0; i < row; i++){
        for (int j = 0; j < cols;j++){
            cin >> mat2[i][j];
        }
    }
}
void cal(const int mat1[row][cols], const int mat2[row][cols], int result[row][cols]){

    for (int i = 0; i < row;i++){
        for (int j = 0; j < row;j++){
            result[i][j] = 0;
            for (int k = 0; k < cols;k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void display(const int mat1[row][cols], const int mat2[row][cols], int result[row][cols]){
    cout << "Matrix 1 is : \n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < cols;j++){
            cout << mat1[i][j] <<" ";
        }
        cout << endl;
    }
     cout << "Matrix 2 is : \n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < cols;j++){
            cout << mat2[i][j] <<" ";
        }
        cout << endl;
    }
    cout << "After Multiplication new matrix is :  \n";
     for (int i = 0; i < row; i++){
        for (int j = 0; j < cols;j++){
            cout << result[i][j] <<" ";
        }
        cout << endl;
    }

}

int main(){
    int mat1[row][cols];
    int mat2[row][cols];
    int result[row][cols];

    input(mat1,mat2);
    cal(mat1, mat2, result);
    display(mat1, mat2, result);
    cout << endl;
    return 0;
}