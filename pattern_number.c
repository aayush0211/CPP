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
    //int n;
   // cout<<"ENter n \n";
    //cin>>n;

    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=5;k>i;--k){
            cout<<" ";
            if(k!=5)
            cout<<" ";
        }
        if(i==5){
            for(int j=4;j>0;j--)
            cout<<j;
        }
        if(i!=5){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        }

        cout<<endl;
    }
    return 0;
}
