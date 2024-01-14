#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
// taking n student's m subject marks and then calculate avg student wise as well as subject wise
int* give_memory(int n,int m)
{
    int *p=(int *)malloc(n*m*sizeof(int));
    return p;
    
}
void readData(int *p,int n,int m)
{
    for(int i=0;i<n;i++)
    {   
        cout<<"\n enter "<<i+1<<" student data :- ";
        for(int j=0; j<m;j++)
        {
            cout<<"\n enter "<<j+1<<" subject marks :- ";
            cin>>*(p+(i)*m+j);        }
    }
}
void average(int *p,int n,int m,int *avg)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=*(p+(i)*m+j);
            
        }
        avg[i]=sum/m;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n average of "<<i+1<<" student :- "<<avg[i];
    }
    
}
void subjectAvg(int *p,int n, int m,int *avg)
{   int sum=0;
    for (int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=*(p+m*j+i);
        }
        avg[i]=sum/n;
        cout<<"\n average of "<<i+1<<" subject (subject_wise) "<<avg[i];
    }
}

int main()
{   
    int num_student,num_subject,*p,*avg=give_memory(num_student,1),*avg_subject_wise=give_memory(1,num_subject);

    cout<<"\n enter number of student :- ";
    cin>>num_student;
    cout<<"\n enter number of subject :- ";
    cin>>num_subject;


    p=give_memory(num_student,num_subject);
    readData(p,num_student,num_subject);

    average(p,num_student,num_subject,avg);

    subjectAvg(p,num_student,num_subject,avg_subject_wise);

    free(p);
    free(avg);
    free(avg_subject_wise);


 return 0;
}