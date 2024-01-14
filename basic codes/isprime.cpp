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
    int n; bool prime=true;
    do{
        cout<<"enter  +ve number:-";
        cin>>n;
    } while (n<0);

    prime=isprime(n);
 if(prime==true) cout<<"\nenteres number is prime";
 else
 cout<<"\nenteres number is not prime";
return 0;
}