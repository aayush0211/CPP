//Draw a rectangle for user defined dimensions of length and breadth.
#include<iostream>
using namespace std;

void drwRect(int a, int b){

    int max =a;
    int min=b;
    if(max<b){

        max=b;
        min=a;
    }

    for(int i=0; i<min+2 ; i++){

        
        for(int j=0; j<max+2 ; j++){

        if(j==0&&i!=0)
        cout<<"|";       

       if((i==0||i==min+1)&&(j!=0||j!=max+1))
        cout<<"__";
        
       if(i!=0||i!=min+1){
        cout<<"  ";
       if(j!=0||j!=max+1)
       cout<<"  ";
       }
        if(j==max+1&&i!=0)
        cout<<"|";  
        }
        cout<<endl;

    }
}

int main(){
int len,brth;
    do{
        cout<<"enter rectangle length (each space count 1 digit,<10) : ";
        cin>>len;
        cout<<"enter rectangle breadth : ";
        cin>>brth;
    }while(len<0||len>10||brth<0||brth>10);

    drwRect(len,brth);

    return 0;
}