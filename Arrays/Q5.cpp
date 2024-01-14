// check whether an element is present in an array or not

#include<iostream>
using namespace std;

bool search(int nums[], int n, int element){
        for(int i=0;i<nums[i];i++){
            if(nums[i]==element){
                return 1;
            }
        }
        return 0;
}

int main(){
    int n;
    int element;
    do{
    cout<<"Enter no of elements to be taken: \n";
    cin>>n;
    }while(n<=0);
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be found: \n";
    cin>>element;
    bool result = search(arr, n, element);
    if(result==1) cout<<"Element is Present \n";
    else cout<<"Element is not Present \n";
 
    return 0;
}