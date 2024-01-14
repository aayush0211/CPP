#include<iostream>
#include<cstdlib>
using namespace std;
class Array
{
    int size;
    int *arr;
public :
    Array():size(5)
    {
        memory_allocation();
        for(int i=0;i<5;i++)
            arr[i]=0;
    }
    Array(int n):size(n)
    { memory_allocation();
        for(int i=0;i<n;i++)
        arr[i]=0;
    }
    void takesize()
    {
        cout<<"\n enter size of array :- ";
        cin>>size;
        memory_allocation();
    }
    void readData()
    {   cout<<"\n enter "<<size<<" elements one by one :- ";
        for(int i=0;i<size;i++)
        {
            cout<<"\n enter "<<i+1<<" element :- ";
            cin>>arr[i];
        }
    }
    void displayData()
    {
        cout<<"\n output data :- ";
        for(int i=0;i<size;i++)
        cout<<"\n "<<i+1<<" element is :- "<<arr[i];
    }
     Array(Array &obj)                 // DEEP COPPY constructor
     {
        size=obj.size;
        memory_allocation();
        for(int i=0;i<size;i++)
           { arr[i]=obj.arr[i];
            }
            displayData();
     }
    void memory_allocation()
    {
        this->arr=(int *)malloc(size*sizeof(int));
    }
    ~Array()
        {
            cout<<"\n memory free total size "<<size;
            free(arr);
        }
    
};

int main()
{
    Array obj1,obj2(3);
   // obj3.takesize();

    obj2.readData();

   Array obj3=obj2;


 return 0;
}