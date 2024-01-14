// print sin series

#include<iostream>
#define PI 3.142
using namespace std;

double power(double base, double exp){
    double pow=1;
    for(int i=0;i<exp;i++){
        pow=pow*base;
    }
    // cout<<pow<<endl;
    return pow;
}
double fact(double x){
    int f=1;
    for(int i=x;i>=1;i--){
        f=f*i;
    }
    
    return f;
}
double sin_series(double x){
    double factorialx,powerx,total=0;
        
            int j=1;
    for(int i=1;i<10;i=i+2,j*=-1){
            factorialx = fact(i);
            powerx = power(x,i);
            total+=(j)*powerx/factorialx; 
            
    }
    return total;
}

int main(){
    double x;
    cout<<"Enter angle in degree: ";
    cin>>x;
    x*=PI/180;
    cout<<"\n radian angle: "<<x;
    double sinx=sin_series(x);
    cout<<"\n sin("<<x<<") = "<<sinx<<endl;
    return 0;
}