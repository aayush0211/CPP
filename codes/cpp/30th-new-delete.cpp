#include<iostream>
using namespace std;
int main()
{   
    int size,*arr;
    cout<<"\n enter no of subject :- ";
    cin>>size;
    arr=new int[size];
     double avg=0;

    cout<<"\n enter marks of subjects :- ";
    for(int i=0;i<size;i++)
    {   cout<<"\n enter "<<i+1<<" subject ";
        
                cin>>arr[i];
                avg+=arr[i];
    }
   avg/=size;

   cout<<"\n the avg is :- "<<avg;

    delete[] arr;
 return 0;
}