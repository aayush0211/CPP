// 3*3 matrix input display and transpose

#include<iostream>
using namespace std;
 void input(int arr[][3]){

    cout<<"enter aaray value : ";

    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){

            cin>>arr[i][j];
        }
    }
 }

 void display(int arr[][3]){

    cout<<"result of an array : \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 }

 void transpose(int arr[][3]){

    cout<<"after transpose ";

    for(int i=0; i<2 ; i++){
        for(int j=0;j<3;j++){

            if(i==1&&j==0)
            continue;

            if(i!=j){
                int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            }
        }
    }
 }

int main(){

    int arr1[3][3];

    input(arr1);
    display(arr1);
    
    transpose(arr1);
    display(arr1);

    return 0;
}