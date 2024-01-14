/*
5. Find the first digit in a positive integer.
For example:
Number = 32
First Digit = 3

*/

#include<iostream>
using namespace std;

int firstd(int num){

    while(num>10){
     num=num/10;   
    }
    return num;
}

int main(){
    int num;
    do{
    cout<<"Enter positive integer: \n";
    cin>>num;
    }while(num<=0);
    cout<<"First digit of "<<num<<" is: "<<firstd(num);
    cout<<endl;
    return 0;
}