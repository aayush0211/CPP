#include<iostream>
using namespace std;
void charline(char ch,int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<ch;
    }
    cout<<endl;
}
// void printData(){
    
//     for(int i=0;i<l;i++)
//     {
//         cout<<"Integer      "<<1;
//         cout<<"Integer      "<<1;
//         cout<<"Integer      "<<1;
        
//     }
    

int main()
{
    char ch;int length;
    cout<<"\n enter the char :- ";
    cin>>ch;
    cout<<"\n enter the lenght :- ";
    cin>>length;

    charline(ch,length);

    cout<<"\tdata Taype "<<"\t\tSize in Bytes "<<endl;
    charline(ch,length);
    cout<<"\tInteger "<<"\t\t"<<4<<endl;
    charline(ch,length);
    cout<<"\tCharacter "<<"\t\t"<<1<<endl;
    charline(ch,length);
    cout<<"\tFloat      "<<"\t\t"<<4<<endl;
    charline(ch,length);
 return 0;
}