// cal string length and letter
#include<iostream>
using namespace std;

int strlen(char str[]){
    int count=0;

    for(int i=0;str[i]!='\0'; i++){

        count++;
    }
    return count;
}
int lettercnt(char str[]){
    int count=0;

    for(int i=0;str[i]!='\0'; i++){
        if(str[i]==' '){
            continue;
        }
        count++;
    }
    return count;
}
int main(){

    char str[]="hello world";

    int len = strlen(str);
    int letter = lettercnt(str);

    cout<<"number of elements are present in above string : "<<len<<endl;
     cout<<"number of letter are present in above string : "<<letter<<endl;

    return 0;
}