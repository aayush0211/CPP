// element insert in aaray accept an pos'n n
#include<iostream>
using namespace std;

void input(int arr[],int n,int pos){

    for(int i=0; i<n; i++){

        if(i==pos)
        continue;

        cout<<"enter an element in a array : ";
        cin>>arr[i];
    }
}

void display(int arr[],int n){
cout<<"result is :"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    
    int n,pos;
    cout<<"enter size of an array : ";
    cin>>n;

    int arr[n];

    cout<<"index of an array where element not inserted : ";
    cin>>pos;

    input(arr,n,pos);
    display(arr, n);

    return 0;
    
}