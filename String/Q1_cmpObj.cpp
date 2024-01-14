//compare two object by overloading relational operators.

#include<iostream>
using namespace std;
class opr{
    int num;
    public: 
    opr(int num2):num(num2){
    }
    bool operator>(opr obj2){
       if(num>obj2.num)
        return 1;

        return 0;
    }
    bool operator<(opr obj2){
        if(num<obj2.num){
            return 1;
        }
        return 0;
    }
    bool operator==(opr obj2){
        if(num==obj2.num)
        return 1;

        return 0;
    }
    

};

int main(){
    opr ob1(30), obj2(20);
    bool result = ob1>obj2;
    if(result == 1) cout<<"obj1>obj2 \n";
    else{
       result = ob1==(obj2);
       if(result==1) cout<<"obj1=obj2 \n";
       else{
        cout<<"obj<obj2 \n";
        
       }
    }
    cout<<endl;
    return 0;
}