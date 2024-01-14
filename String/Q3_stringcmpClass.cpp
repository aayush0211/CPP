//string class and overload relational operator
#include<iostream>
#include<string.h>
using namespace std;

class stringg{
    char str[100];

    public:
        stringg(const char str1[100]){
            int i;
            for(i=0; str1[i]!='\0';i++)
                str[i]=str1[i];
           str[i]='\0';

        }
        void display(){
            cout<<"string is   : "<<str<<endl;
        }
        bool operator==(stringg obj2){
            
            int result =0;
            for( int i=0; (str[i]!='\0')||(obj2.str[i]!='\0'); i++){
                if(str[i]==obj2.str[i])
                result=1;

                else
                result=0;
            }
            
           return result;
        }

       

};

int main(){
    stringg obj1( "hello world" ),obj2( "hello world" );

    obj1.display();
    obj2.display();

    bool result = obj1==obj2;

    if(result==true) cout<<"both equal";

    else cout<<"both different";

    return 0;
}
