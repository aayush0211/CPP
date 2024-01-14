// print;
/*      1 2 3 4 5 4 3 2 1
        1 2 3 4   4 3 2 1 
        1 2 3       3 2 1
        1 2           2 1
        1               1
*/
#include<iostream>
using namespace std;

int main(){
    int n;
   cout<<"ENter n \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j;
        }
        for(int k=2;k<2*i-1;k++){
            cout<<" ";
        }
        if(i==1){
            for(int j=n-1;j>=1;j--){
                cout<<j;
            }
        }
        else{
            for(int j=n+1-i;j>=1;j--){
                cout<<j;
            }
        }
        cout<<endl;
    }   
    return 0;
}