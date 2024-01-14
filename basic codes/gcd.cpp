#include<iostream>
using namespace std;
int main(){
    int no1,no2,hcf=1;

    cout<<"enter two integer";
    cin>>no1>>no2;

    if(no1>no2){
        int temp=no1;
        no1=no2;
        no2=temp;
    }

    for(int i=2; i<=no1; i++){

        if(no1%i==0 && no2%i==0){

            hcf=i;
        }
    }

    cout<<"hcf of these two no's is:"<<hcf;

    return 0;
}