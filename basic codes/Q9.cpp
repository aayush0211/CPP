/*
9. Given a positive integer N, check if its palindrome or not. A palindrome number is a number that is same as its reverse.
For example:
Number = 32
Not a palindrome. (Reverse is 23 and not same as 32)
Number = 545
A palindrome. (Reverse is 545 and not same as 545)
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
void pallindrome(int digit){
    if(reverse(digit)==digit)
        cout<<digit<<" is "<<" Pallindrome \n"<<endl;
        else
        {
            cout<<digit<<" is not a "<<" Pallindrome \n"<<endl;
        }
}

int main(){
    int digit;
    do{
    cout<<"Please input a positive integer \n";
    cin>>digit;
}while(digit<=0);
    pallindrome(digit);
    return 0;
}

   