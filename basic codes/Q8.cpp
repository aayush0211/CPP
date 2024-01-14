/*
8. Find the product of all digit of a positive integer.
For example:
Number = 312
Sum of digits = 6 (3 x 1 x 2)
*/

#include<iostream>
using namespace std;

int prod(int no){
    int res=1;
    while(no){
        res *= no%10;
        no=no/10;
    }
    return res;
}
int main(){

    int no;
    do{
    cout<<"please enter an integer \n";
    cin>>no;
    }while(no<0);
    
    cout<<"sum of digits is:"<<prod(no);
    cout<<endl;
    return 0;
}