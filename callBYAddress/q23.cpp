// Prog o accepts two integer in main.Pass these arguments to max() and return address in main.

#include<iostream>
using namespace std;

int max(int &c, int &d){
    if(c>d){
        return c;
    }
    else return d;
}

int main(){
    int a, b;
    cout<<"Enter two integer \n";
    cin>>a>>b;
    int result = max(a,b);
    cout<<"Max of two numbers are : "<<result<<endl;
    cout<<"Address : "<<&result<<endl;
    return 0;
}
