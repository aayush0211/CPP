/*
12. Find the count of a digit in a given positive integer.
For example:
Number = 12123
Digit = 1
Count of digit 1 in 12123 = 2 (as 1 appears twice in the number)

*/


#include<iostream>
using namespace std;

int main(){
    int n,r, cnt = 0;
    do{
     cout<<"Enter a positive number\n";
     cin>>n;
     r=n;
    }while(n<=0);

    int digit ;
    cout<<"Enter digit of a number\n";
    cin>>digit;
    while(n>0){
        if(digit==n%10) cnt++;

        n=n/10;
    }
    n=r;
    cout<<"Digit "<<digit<<" in the number "<<r<<" appears "<<cnt<<" times \n";
    return 0;
    
}