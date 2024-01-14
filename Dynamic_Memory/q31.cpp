/* Write a program to sort five user entered strings into alphabetical order. Use dynamic memory
allocation to store strings. */
#include<bits/stdc++.h>
using namespace std;

void inp(char **str){
    for(int i=0; i<5;i++){
        cin.getline(str[i],20);
    }
}

void arngString(char **str){
    char *temp[5];
    for(int i=0;i<5;i++){

          int l=strlen(str[i]);
          temp[i]=(char *)malloc(sizeof(char)*l+1);
          strcpy(temp[i],str[i]);
    }

    for(int i=0; i<5; i++){

        for(int j=i+1;j<4;j++){

            if(strcmp(*temp[i],*temp[j])>0){
                swap(*temp[i],*temp[j]);
            }
        }
    }

    for(int i=0; i<5 ; i++){
        cout<<temp[i];
    }

   
  

}

int main(){
 char *str[5];
 cout<<"Enter strings \n";
 inp(str);
 arngString(str);
 
    return 0;
}