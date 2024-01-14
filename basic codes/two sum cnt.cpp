#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,5,7,-1,5};
    int sum=6,cnt=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5 ; j++){

            

            if(sum == arr[i]+arr[j])
            cnt++;

            
        }
    }
    cout<<"pair of no's in array whose "<<sum<<" are:"<<cnt;

    return 0;
    
}