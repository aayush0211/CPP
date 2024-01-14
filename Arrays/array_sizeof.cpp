// array

#include<iostream>
using namespace std;

void arr1(int arr[]){
    cout<<"After function call: \n";
    arr[2] = 10;
    cout<<arr[2];

}

int main(){
    int arr[5] ={1,2,3,4,5};
    cout<<arr[2];
    arr1(arr);
    cout<<arr[2];

    return 0;
}