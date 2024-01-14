// Prog to calculates the average marks of all the subjects.

#include<bits/stdc++.h>
using namespace std;

 void inp(int *p , int n){
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
}

void avgg(int *p, int n)
{   
        int avg=0; int sum=0;
    for(int i=0;i<n;i++){
        sum+=p[i];
    }
    avg=(sum)/n;
   cout<<"Average of all subjects marks is: "<<avg;
   
} 


int main(){
    int  n;
    cout<<"Enter number of Subjects: \n";
    do{
    cin>>n;
    }
    while(n<=0 || n>10);
    int *s=(int *) malloc(sizeof(int)*n);

    cout<<s;

    cout<<"enter marks ";

    inp(s,n);
     avgg(s,n);

    return 0;

}
 
