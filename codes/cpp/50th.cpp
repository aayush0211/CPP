#include<iostream>
using namespace std;
template<class T>
void sort(T *a,int n)
{   T temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }}
        cout<<"\t"<<a[i];
    }

}

int main()
{   
    int arr[5]={5,67,8,2,0};
    char ch[5]={'h','J','e','\0','l'};
    double du[5]={23.56,67.5,43.8,2,0};
    //cout<<"\t"<<sizeof(arr);
   sort<int>(arr,5);
   sort<char>(ch,5);
   sort<double>(du,5);


 return 0;
}