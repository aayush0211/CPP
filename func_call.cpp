#include<iostream>
using namespace std;

void call_by_addr(int &num1, int &num2){
        num1++;
        num2++;
        cout<<"by address: "<<num1<<" "<<num2;
        cout<<endl;
}

void call_by_value(int num1, int num2){
    num1++;
    num2--;
    cout<<"by value: "<<num1<<" "<<num2;

}
int main(){
    int num1 = 10, num2 = 20;
    call_by_addr(num1,num2);
    cout<<num1<<endl;
    call_by_value(num1,num2);
    cout<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
     cout<<endl;
     
        return 0;
}