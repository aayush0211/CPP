#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
void accept(int *p,int n)
{
    cout<<"\n enter marks :- ";
    for(int i=0;i<n;i++)
    {
        cout<<"\n enter "<<i+1<<" subject marks :- ";
        cin>>p[i];
    }
}
int main()
{   int n; double avg=0;
    cout<<"\n enter no. of subject :- ";
    cin>>n;
    int *arr=new int[n];
    accept(arr,n);
    for(int i=0;i<n;i++)
    {
        avg+=arr[i];
    }
    avg/=n;
    cout<<"\n average of all subjects "<<avg;
 return 0;
}