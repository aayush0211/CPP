// copy one string into other

#include<iostream>
using namespace std;
    int i;
void strcpy(char str1[],char str2[]){
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    while(str2[i]!='\0'){
        str2[i]='\0';
        i++;
    }

    cout<<"String 2 after copying : "<<str2;
}

int main(){
    char str1[100],str2[100];
    cout<<"Enter first string \n";
    cin>>str1;
    cout<<"Enter second string \n";
    cin>>str2;
    cout<<"String 2 before copying : "<<str2<<endl;
    strcpy(str1,str2);
    cout<<endl;
    return 0;
}