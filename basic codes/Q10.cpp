/*
10. Given a positive integer N, check if it is a perfect number or not.
Perfect number is a positive integer that is equal to the sum of its factors (excluding the number itself).
For example:
N = 12
Factors = 1 2 3 4 6 (we do not consider 12)
Sum of factors = 1 + 2 + 3 + 4 + 6 = 16
As Sum of factors is not equal to the Number 12, 12 is not a perfect number.
N = 6
Factors = 1 2 3 (we do not consider 6)
Sum of factors = 1 + 2 + 3 = 6
As Sum of factors is equal to the Number 6, 6 is a perfect number.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a positive Integer \n";
    cin>>number;
    int result = number;
    int i=1, sum=0;
    while(i<=(number/2)){
        if(result%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum==result) {cout<<number<<" is a perfect number. ";}
    else{
        cout<<number<<" is not a perfect number." ;
    }
        cout<<endl;

        return 0;
}