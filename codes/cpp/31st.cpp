#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
char* creatstring(int l)
{
    char *p=(char*)malloc(l*sizeof(char)+1);
    return p;
}
void makestring(char **str)
{
    char temp[100]; int length;
    for(int i=0;i<5;i++)
    {
        cout<<"\nenter a "<<i+1<<" string :- ";
        cin.getline(temp,20);
        length=strlen(temp);
        *(str+i)=creatstring(length);
        strcpy(*(str+i),temp);
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
    char *str[5];

    makestring(str);

    orderstring(str);

    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<i+1<<" string :- "<<str[i];
    }
    

 return 0;
}