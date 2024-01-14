#include<iostream>
using namespace std;

void input(int arr[][3]){
    cout<<"Enter elements of matrix \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
}
void display(int arr[][3]){
    cout<<"\nElements of matrix are \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int arr[][3]){
    for(int i=0;i<2;i++){
        for(int j=0; j<=2;j++){
            if(i==1 && j==0){
                continue;
            }
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main(){
    // int m, n;
    // cout<<"Enter no of rows: ";
    // cin>>m;
    // cout<<"\nEnter no of column: ";
    // cin>>n;
    int arr[3][3];
    input(arr);
    display(arr);
    transpose(arr);
    display(arr);
    cout<<endl;
    return 0;

}