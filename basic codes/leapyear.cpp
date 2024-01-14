//Write a program to find leap year by using:
//a. if-else and logical operators (&amp;&amp; and ||)
//b. Conditional Operators (? :)
//(A leap year is divisible by 4 and is not divisible by 100 but it could be divisible by 400)
#include<iostream>
using namespace std;
void leapYr(int year){

    if(year%400==0)
     cout<<"this is leap year";

     else if (year%4==0 && year%100 != 0)
     {
        cout<<"this is leap year ";
     }
     else
     {
        cout<<"this is not leap year";
     }
}

int main(){

int yr;
    do{
        cout<<"please enter any year : ";
        cin>>yr;
    }while(yr<=0);

    leapYr(yr);
}