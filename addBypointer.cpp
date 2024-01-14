#include<iostream>
using namespace std;

int* add(int a, int b){
   int c = a+b;
   c++;
    
    return &c;
}

int main(){


    int* d=add(1,3);
    d=add(1,3);
     d=add(1,3);
    d=add(1,3);

    cout<<"addition is : "<<*d<<endl;

    return 0;
}