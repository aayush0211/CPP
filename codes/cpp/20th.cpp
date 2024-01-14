#include<iostream>
#define PI 3.142
using namespace std;
double rest(int x)
{  // cout<<"\n factorial called ";
    double total=1;
    for(int i=x;i>0;i--)
    {
        total*=i;
    }
cout<<total<<endl;
    return total;
}
double power(double x,int n)
{  // cout<<"\n power called ";
    double power=1;
    for(int i=0;i<n;i++)
    {
        power*=x;
    }
    return power;
    
}

double sine(double x)
{  // cout<<"\n sine called ";
    double total=0,factorialx,powerx;
    int j=1;

    for(int i=1;i<10;i=i+2,j*=-1)
    {
        factorialx=rest(i);
        powerx=power(x,i);
        total+=(j)*powerx/factorialx;
    }
 
    return total;
}
int main(){
    double x;

    cout<<"\n enter the angle in degree ";
    cin>>x;
    x*=PI/180;
    cout<<"\n radian angle :- "<<x;
    double sinex=sine(x);
    cout<<"\n sin("<<x<<") = "<<sinex;
    return 0;
}