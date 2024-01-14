/*
2. Given a positive integer N, find its reverse.
For example:
N = 534
Reverse = 435
N = 5
Reverse = 5
*/

#include<iostream>
using namespace std;

int reverse(int digit){
    int rem, rev=0;
    while(digit>0){
        rem=digit%10;
        rev = rev*10+digit%10;
        digit=digit/10;
    }
    return rev;
}

int main(){
    int digit,rem,rev=0;
    do{
    cout<<"Please input a positive integer \n";
    cin>>digit;
}while(digit<=0);
    cout<<"Reverse of "<<digit<<" is: "<<reverse(digit);
    cout<<endl;
    return 0;
}