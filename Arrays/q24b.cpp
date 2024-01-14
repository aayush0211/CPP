// Program to multiply each element by 5 and store it in another array

#include<iostream>
using namespace std;

void input(int arr[], int n){
    cout<<"Enter elements of an array \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void Display(int arr[], int n){
    int arr1[n];
    for(int i=0; i<n; i++){
       arr1[i] = arr[i]*5;
       cout<<arr1[i]<<" ";
    }
    
}
int main(void){
    int n;
    cout<<"Enter no of elements \n";
    cin>>n;
    int arr[n];
    input(arr, n);
    Display(arr,n);
    cout<<endl;
    return 0;
}