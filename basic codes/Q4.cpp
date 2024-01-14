/*
4. Find prime numbers between two positive integers N and M, including N and M.
For example:
N = 3
M = 10
Prime Numbers = 3 5 7
*/

#include<iostream>
using namespace std;
 int main(){
    int no1,no2;

    do{
        cout<<"please enter two positive integer \n";
        cin>>no1>>no2;
    }while(no1<=2 && no2<=2);
if(no1>no2){
    int temp=no1;
    no1=no2;
    no2=temp;
}


cout<<"prime number b/w "<<no1<<" and "<<no2<<" is : ";
for( ; no1<=no2; no1++){
    int flag=0;

    for(int i=2; i<=no1/2 ; i++){

        if(no1%i==0){

        
        flag=1;
        break;
        }

    }
    if(flag==0){
        cout<<no1<<" ";
    }
}
return 0;
}