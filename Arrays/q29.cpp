// string accept 1)no. of occurence of given char 2)no. spaces 3)no. words 4)no of vowels

#include<iostream>
using namespace std;

void taskPerform(char str[],int n,char chr){
     int wordcnt=1;
     if(str[0]==' ')
     wordcnt=0;

     int vowcnt=0;

     int spacount =0;

     int chrcnt=0; 

     for(int i=0;i<n; i++){
        
         if(str[i]==' ')
         spacount++;

         if(str[i]==chr)
111         chrcnt++;

         if(str[i]==' '&&str[i+1]!=' '&&str[i+1]!='\0')
         wordcnt++;

         if((str[i]=='a')||(str[i]=='A')||(str[i]=='i')||(str[i]=='I')||(str[i]=='e')||(str[i]=='E')||(str[i]=='o')||(str[i]=='O')||(str[i]=='u')||(str[i]=='U'))
         vowcnt++;

        
     }
     if((chr=='a')||(chr=='A')||(chr=='i')||(chr=='I')||(chr=='e')||(chr=='E')||(chr=='o')||(chr=='O')||(chr=='u')||(chr=='U'))
         vowcnt--;
     cout<<"no. of occurence of given char is : "<<chrcnt<<endl;
     cout<<"no. of spaces given in string are : "<<spacount<<endl;
     cout<<"no. of words in above strings are : "<<wordcnt<<endl;
     cout<<"no. of vowels in given string are :  "<<vowcnt<<endl;
}


int main(){

    char str[100], chr;
    cout<<"enter a string  ";
    cin.getline(str,100);
    cout<<str;

    cout<<"enter char which count will found in string : ";
    cin>>chr;

    int n= sizeof(str)/sizeof(char);
    cout<<"no. of char in string : "<<n<<endl;

    taskPerform(str,n,chr);



    return 0;
}
