#include<iostream>
using namespace std;

void swap (int *num1,int *num2){

    int temp =*num2;
    *num2=*num1;
    *num1=temp;
    cout<<"no1= "<<*num1<<"no2 = "<<*num2<<endl;
    
}

int main(){

    int no1,no2;
    cin>>no1>>no2;

    swap(&no1,&no2);
    
    cout<<"no1= "<<no1<<" no2= "<<no2;
    return 0;
}