//compare of two strings

#include<iostream>
using namespace std;

bool compare(char str1[], char str2[]){

    int i=0;
    while(str1[i]!='\0' || str2[i]!='\0'){

        if(str1[i]!=str2[i])
        return 0;
        i++;
    }
    return 1;
}

int main(){
    char str1[100],str2[100];
    cout<<"enter first string : ";
    cin>>str1;
    cout<<"enter second string : ";
    cin>>str2;
 bool result = compare(str1, str2);

if(result==1)
cout<<"\n both strings are equal "<<endl;

else
{
    cout<<"both strings are different ";
}
 return 0;

}