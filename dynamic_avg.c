// Prog to calculates the average marks of all the subjects.

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void avgg(int **p, int n)
{   
        int avg=0; int sum=0;
    for(int i=0;i<n;i++){
        sum+=**p[i];
    }
    avg=(sum)/n;
    cout<<"Average of all subjects marks is: "<<avg;
}

int main(){
    int n;
    cout<<"Enter number of Subjects: \n";
    do{
    cin>>n;
    }while(n<=0 || n>10);
    int *s = (int *)malloc(size0f(int)*n);
    avgg(s,n);
    cout<<endl;
    return 0;

}