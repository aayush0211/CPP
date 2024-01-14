#include<iostream>
#include<vector>
using namespace std;
int main()
{   int temp;
    vector<int>arr;
    for(int i=0;i<10;i++)
    {
        cout<<"\n enter "<<i+1<<" value : ";
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"\n enter one more value : ";
    cin>>temp;
    arr.push_back(temp);
    cout<<"\n enter 2nd more value : ";
    cin>>temp;
    arr.push_back(temp);
    cout<<"\n vector content AS :- ";
    for(int i=0;i<arr.size();i++)
    cout<<"\t"<<arr[i];

    arr.pop_back();
    arr.pop_back();

    cout<<"\n after delete last 2 element , vector content as : ";
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<"\t";
 return 0;
}