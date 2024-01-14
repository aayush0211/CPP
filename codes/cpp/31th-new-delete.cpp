#include<iostream>
#include<cstring>

using namespace std;
char* creatstring(int size)
{
    char *p=new char[size];
    return p;
}

void get_string(char **arr)
{   char temp[10];
    cout<<"\n enter string :-";
    for(int i=0;i<5;i++)
    {
        cout<<" \n enter "<<i+1<<" string :- ";
        cin>>temp;
        arr[i]=creatstring(strlen(temp));
        strcpy(arr[i],temp);
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\n "<<i+1<<" string :- "<<*arr[i];
    }
}
void sorting(char **arr)
{
    char *ch;
    for(int i=0;i<5;i++)
    {   for(int j=i;j<5;j++)
        {if(strcmp(arr[i],arr[j])>0)
            ch=arr[i];
            arr[i]=arr[j];
            arr[j]=ch;
        }
    }
}
void orderstring(char **str)
{
    char *temp;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(*(str+i),*(str+j))>0)
            {
                temp=*(str+i);
                *(str+i)=*(str+j);
                *(str+j)=temp;
            }
        }
    }
}
int main()
{   
    char **arr=new char*[5];
    get_string(arr);
    sorting(arr);
    cout<<"\n the sorted strings are :- ";
    for(int i=0;i<5;i++)
    {
        cout<<"\n "<<i+1<<" string :- "<<arr[i];
    }
    for(int j=0;j<5;j++)
    {
        delete[] arr[j];
    }
    delete[] arr;
 return 0;
}