#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class complex {
    double real;
    double imaginary;
 
public :
    static int count;
    complex():real(0),imaginary(0)
    { counting(); }
    complex(double r,double m):real(r),imaginary(m)
    { counting(); }
    void set()
    {
        cout<<"\n enter the real component :- ";
        cin>>real;
        cout<<"\n enter the imaginary component :- ";
        cin>>imaginary;
    }
    void get()
    {
        cout<<"\n the complex number is :- "<<real<<" "<<imaginary;
        cout<<"\n the count of objects is :- "<<count;
    }
    void static counting();
};
int complex::count;
void complex::counting()
{
    count++;
}

int main()
{
    complex obj1,obj2(5.5,7.8),obj3;
    obj3.get();
    obj3.set();
    obj3.get();

 return 0;
}