#include<iostream>
using namespace std;

 void charLine(char ch , int l){
    for(int i=0;i<l;i++){
        cout<<ch;
    }
    cout<<endl;
     
 }

int main(){
    char ch; int length;
    cout<<"\nEnter the char: ";
    cin>>ch;
    cout<<"\nEnter length : ";
    cin>>length;
    cout<<"\n\n\n";
    charLine(ch,length);

    cout<<"\tdata type "<<"\t  Size in Bytes "<<endl;
        charLine(ch,length);
       cout<<"\tinteger "<<"\t\t"<<4<<endl;
       charLine(ch,length);
        cout<<"\tcharacter "<<"\t\t"<<1<<endl;
        charLine(ch,length);
        cout<<"\tFloat "<<"\t\t\t"<<4<<endl;
            charLine(ch,length);
            cout<<endl;
    return 0;

}