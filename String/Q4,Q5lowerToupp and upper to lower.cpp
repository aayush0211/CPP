// convert lower case char into upper case k
#include<iostream>
using namespace std;

void toUpper(char str[]){
    for(int i=0;str[i]!='\0';i++){
        int temp = str[i];
        if(temp>=97 && temp<=122){
            temp=temp-32;
        }
        str[i]=temp;
    }
    cout<<"after convert into upper case : "<<str<<endl;
}
void toLower(char str[]){
    for(int i=0;str[i]!='\0';i++){
        int temp = str[i];
        if(temp>=65 && temp<=90){
            temp=temp+32;
        }
        str[i]=temp;
    }
    cout<<"after convert into lower case : "<<str<<endl;
}


int main(){
    char str[100];
    cout<<"Enter string: ";
    cin>>str;

    toUpper(str);
    toLower(str);

    return 0;
}