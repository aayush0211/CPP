// delete an element in aaray 
#include<iostream>
using namespace std;
void input(int arr[], int n){
    cout<<"Enter elements of an array \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void deleteArr(int arr[], int n, int pos){

    if(pos==n){
        
    }
    else {
    
    for(int i=pos+1; i<n; i++ ){
        arr[i-1]=arr[i];
    }
        
    }
}


void Display(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
       
       cout<<arr[i]<<" ";
    }
    
}


int main(){

    int n, pos;
    cout<<"Enter no of elements \n";
    cin>>n;
    
    int arr[n];
    input(arr, n);

    cout<<"enter a position of an array whose value will be delete : ";
    cin>>pos;


    deleteArr(arr, n, pos);

    Display(arr,n);
}