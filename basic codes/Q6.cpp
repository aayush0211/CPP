/*
6. Find the sum of all digit of a positive integer.
For example:
Number = 3245
Sum of digits = 14 (3 + 2 + 4 + 5)
*/

#include<iostream>
using namespace std;
int main(){

    int no;
    cout<<"please enter an integer";
    cin>>no;

    int sum=0;
    while(no){
        sum += no%10;
        no=no/10;
    }
    cout<<"sum of digits is:"<<sum;
    return 0;
}