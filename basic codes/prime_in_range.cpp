#include<iostream>
using namespace std;
bool isprime(int num)
{
    int k=2;
    while(k<=num/2)
    {
        if(num%k==0)
        {
        return false;
        }
        k++;
    }
    return true;
}
int main()
{
    int n,m,sum=0,i,j; bool prime=true;
    do{
        cout<<"enter 2 +ve number:-";
        cin>>n>>m;
    } while (n<0||m<0);

    if(n<m)
   { i=n;
   j=m;}
    else
    {i=m; j=n;}
 cout<<"\nprime numbers are:- ";
while(i<=j)
{
    prime=isprime(i);
    if(prime==true) cout<<i<<" ";
i++;

}
return 0;
}