#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double p, rate, n, time;
    cout<<"input p & rate & time respectively: "<<endl ;
    cin>>p>>rate>>time;

    double fAmount = p*(pow((1+rate/100),time));
    double CI = fAmount - p;

    cout<<"Compound Interest : "<<CI;

    return 0;
}