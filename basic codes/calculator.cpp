#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
void add();
void subs();
void mul();
void div();
void square();
void root();
void exit();
int main(){
    int n;
    do{
        cout<<"Selcect any operation to perform : "
        "\n1 = Addition"
        "\n2 = Substraction"
        "\n3 = Multiplication"
        "\n4 = Division"
        "\n5 = Square"
        "\n6 = Square root"
        "\n7 = exit"
        "\n \nMaKe a choice: ";

        cin>>n;
        switch (n)
        {
            case 1: add();
                break;
            case 2: subs();
                break;
            case 3: mul();
                break;
            case 4: div();
                break;
            case 5: square();
                break;
            case 6: root();
                break;
            case 7:
                exit(0);
        default:
            cout<<"Something wrong..!! ";
            break;
        } 
        cout<<"\n---------------------------------\n";
    } while (n != 7);
        getch();
    

    return 0;
}
void add(){
    int n , sum=0 , number;
    cout<<"Enter numbers you want to add: \n";
    cin>>n;
    cout<<"Enter number one by one: ";
    for(int i=0;i<n;i++){
        cin>>number;
        sum+=number;
    }
    cout<<"result is: "<<sum;
}
void subs(){
    int num1 , num2, z;
    cout<<"Enter first number: \n";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    z = num1-num2;
    cout<<"result is: "<<z;
}
void mul(){
    int num1 , num2;
    cout<<"Enter first number: \n";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    num1 = num1*num2;
    cout<<"result is: "<<num1;
}
void div(){
    int num1 , num2, divi = 0;
    cout<<"Enter first number: \n";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    while(num2 == 0){
        cout<<"\nDivisor cannot be zero"
            "\nplease enter again: ";
            cin>>num2;
    }
    divi = num1/num2;
    cout<<"result is: "<<divi;
}
void square(){
    float num1 ;
    cout<<"Enter number: \n";
    cin>>num1;
    float sqr = num1*num1;
    cout<<"\n square of "<<num1<< " is: "  <<sqr;
}
void root(){
    float num1;
     cout<<"Enter number: \n";
    cin>>num1;
    float q = sqrt(num1);
    cout<<"\n Square root of "<<num1<<" is: "<<q;
}