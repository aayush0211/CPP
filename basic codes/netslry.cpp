//Write a program to accept the basic salary and total sales amount for a salesperson and
//calculate commission according to sales amount. Display the net salary and commission earned.
//(Net Salary = Basic Salary + Commission) The range is as follows.
//Sales Amount in Rupees Commission on Sales
//5000 to 7500 3%
//7501 to 10500 8%
//10501 to 15000 11%
//15000 and above 15%
#include<iostream>
using namespace std;
float calSlry(int slry, int salamt){
int comm;
    if(salamt>=15000)
    comm=15;
    else if (salamt<15000&&salamt>10500)
    {
        comm=11;
    }
    else if (salamt<10500&&salamt>7500)
    {
        comm=8;
    }
    else
    {
        comm=3;
    }

    int net = slry + slry*comm/100;

    return net;
}

int main(){

    int bscSlry,salamt;
    float netSlry;
    do{
        cout<<"enter sales amount of sales person :";
        cin>>salamt;
    }while(salamt<5000);

    cout<<"enter basic salary of salesman : ";
    cin>>bscSlry;

    netSlry=calSlry(bscSlry, salamt);

    cout<<"net salary of a salesman is : "<<netSlry;

    return 0;
}