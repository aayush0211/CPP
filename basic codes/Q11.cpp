/*

11. Given a positive integer N, check if it is an armstrong number or not.
An armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.
For example:
N = 153
Number of digits in number = 3
Sum of its own digits each raised to the power of the number of digits = (1 x 1 x 1) + (5 x 5 x 5) + (3 x 3 x 3) = 1 + 125 + 27 = 153
153 is armstrong number.

*/


#include<iostream>
using namespace std;

int main(){
    int number, rem, cnt=0, sum=0;
    cout<<"Please Enter a positive integer \n";
    cin>>number;
    int result = number;
    while(number>0){
        cnt++;
        number = number/10;
    }
    number = result;
    while(number>0){
        rem=number%10;
        int i=1;
        int z=1;
        while(i<=cnt){
            z=z*rem;
            i++;
        }
        sum+=z;
    number = number/10;
    }
    if(result==sum) cout<<"it is an Armstrong number \n";
    else    cout<<"not an armstrong number \n";

    return 0;
}