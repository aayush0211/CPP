/*
13. Given a positive integer N, print the digits in the number as words.
For example:
N = 231
Result = Two Three One
*/


#include<iostream>
using namespace std;

int main(){
    int digit,rem,rev=0;
    cout<<"Please input a positive integer \n";
    cin>>digit;

    int temp = digit;

    while(digit>0){
        rem=digit%10;
        
        rev = rev*10+digit%10;
        digit=digit/10;
    }
   

    while(rev>0){
        rem = rev%10;
        switch (rem)
        {
            case 0:
                cout<<"Zero ";
                break;
            case 1:
                cout<<"one ";
                break;
            case 2:
                cout<<"two ";
                break;
            case 3:
                cout<<"three ";
                break;
            case 4:
                cout<<"four ";
                break;
            case 5:
                cout<<"five ";
                break;
            case 6:
                cout<<"six ";
                break;
            case 7:
                cout<<"seven ";
                break;
            case 8:
                cout<<"eight ";
                break;
            case 9:
                cout<<"nine ";int result = digit;
                break;
        
        }
        rev=rev/10;
    }

    if(temp%10==0)
    cout<<"zero";

    return 0;
}