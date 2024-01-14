/*

7. Find the sum of all digit of a integer (both positive and negative).
For example:
Number = -3245
Sum of digits = 14 (3 + 2 + 4 + 5)
Number = 12
Sum of digits = 3 (1 + 2)
*/

#include<iostream>
using namespace std;

int posNegSum(int no){
    int sum=0;
    while(no){
        sum += no%10;
        no=no/10;
    }
    return sum;
}
int main(){

    int no;
    cout<<"please enter an integer \n";
    cin>>no;
    if(no<0) no=(-1)*no;
    
    cout<<"sum of digits is:"<<posNegSum(no);
    cout<<endl;
    return 0;
}