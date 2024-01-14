#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){

    int n;
    cout<<"enter size of array";
    cin>>n;

    int *arr;
    arr= (int* ) malloc( sizeof(int)*n);

    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"array is...: ";
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}