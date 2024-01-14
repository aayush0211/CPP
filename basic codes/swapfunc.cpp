//swapping two number using referrence

#include<iostream>
using namespace std;

void swap(int &num1, int &num2){
      cout<<" Before swapping: "
        "\n num1: "<<num1<<
        "\n num2: "<<num2;

    //swapping
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;

    cout<<"\nAfter swapping: "
        <<"\nnum1: "<<num1<<"\nnum2: "<<num2<<" \n";
}
//Swapping in cyclic order
void swap(int &num1,int &num2,int &num3){
    int temp = num3;
    num3 = num2 ;
    num2 = temp;
    cout<<"After Swapping above numbers\n num1: "
    <<num1<<" num2: "<<num2<<" num3: "<<num3<<" ";
    
}
int main(){
     int num1, num2, num3;
    cout<<"Enter 1st number \n";
    cin>>num1;
    cout<<"Enter 2nd number \n";
    cin>>num2;
    cout<<"Enter 3rd number \n";
    cin>>num3;
    swap(num1,num2);    //-----------------------
    swap(num1,num2,num3); // -------------------- Function Overloading occurs

    return 0;
}
