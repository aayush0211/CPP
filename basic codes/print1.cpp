#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            
        }
        num++;
        cout<<endl;
    }
    return 0;
}