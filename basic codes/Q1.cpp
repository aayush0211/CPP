/*
1. Given a positive integer N, find all factors of N.
For example:
N = 12
Factors = 1 2 3 4 6 12
N = 5
Factors = 1 5

*/
SOLUTION: 
	#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a positive Integer \n";
    cin>>number;
    int i=1;
    cout<<"Factors of "<<number<<" are: ";
    while(i<=number){
        if(number%i==0){
            cout<<i<<" ";
        }
        i++;
    }
        return 0;
}