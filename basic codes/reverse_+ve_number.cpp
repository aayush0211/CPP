#include<iostream>
using namespace std;
int reverse(int num)
{
    int digit,rev_num=0;
     while(num!=0)
    {
        digit=num%10;
        num=num/10;
        rev_num=rev_num*10+digit;
    }
    return rev_num;
}
int main()
{
    int n,rev_num;

    do{
        cout<<"enter +ve number:-";
        cin>>n;

    } while(n<=0);

  rev_num=reverse(n);
    cout<<"\nrevrse number:-"<<rev_num;
    return 0;
}