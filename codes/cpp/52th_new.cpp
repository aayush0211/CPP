#include<iostream>
using namespace std;
class complex 
{
    int i;
    float j;
public :
    complex()
    {
        cout<<"\n memory created !";
    }
    void display()
    {
        cout<<"\n real part :- "<<i<<"\t imaginary part :- "<<j;
    }
    void accept(int n,float m)
    {
        i=n;
        j=m;
    }
    ~complex()
    {
        cout<<"\n memory free !";
    }
    
};
template<class T>
class stack
{
    int Size,Top_of_stack; T *Ptr;
public :
    stack()
    {
        cout<<"\n stack constructor invoke !";
        cout<<"\n enter the size of stck :- ";
        cin>>Size;
        Top_of_stack=-1;
        Ptr=new T[Size];
    }
    void push(T a)
    {   if(Top_of_stack==Size)
        {
            throw 1;
        }
        if(Top_of_stack==-1)
        Top_of_stack=0;
        cout<<"\n"<<Top_of_stack;
        Ptr[Top_of_stack]=a;
        Top_of_stack++;
         cout<<"\n"<<Top_of_stack;
    }
     void pop()
    {
        if(Top_of_stack==-1)
        {
            throw 0;
         }
        Top_of_stack--;
        int temp; temp=Top_of_stack;
        if(Top_of_stack==0)
        Top_of_stack=-1;
        cout<<"\n"<<Ptr[temp]<<endl;

    }
    void display()
    {
        cout<<"\n Stack content as follow :- ";
        for(int i=0;i<Top_of_stack;i++)
        cout<<"\t"<<Ptr[i];
    }
};
template<>
class stack <complex>
{
    int Size,Top_of_stack; complex *Ptr;
public :
    stack()
    {
        cout<<"\n stack constructor invoke !";
        cout<<"\n enter the size of stck :- ";
        cin>>Size;
        Top_of_stack=-1;
        Ptr=new complex[Size];
    }
    void push(int n,float m)
    {   if(Top_of_stack==Size)
        {
            throw 1;
        }
        if(Top_of_stack==-1)
        Top_of_stack=0;
        cout<<"\n"<<Top_of_stack;
        Ptr[Top_of_stack].accept(n,m);
        Top_of_stack++;
         cout<<"\n"<<Top_of_stack;
    }
     void pop()
    {
        if(Top_of_stack==-1)
        { 
            throw 0;
         }
        Top_of_stack--;
        int temp; temp=Top_of_stack;
        if(Top_of_stack==0)
        Top_of_stack=-1;
        Ptr[temp].display();

    }
    void display()
    {
        cout<<"\n Stack content as follow :- ";
        for(int i=0;i<Top_of_stack;i++)
        Ptr[i].display();
    }
    ~stack()
    {   
        delete[] Ptr;

    }

};
int main()
{   stack<int>obj1;
try{
    obj1.push(7);
    obj1.display();
    obj1.push(25);
    obj1.display();
    obj1.pop();
    obj1.display();
    obj1.push(37);
    obj1.display();
    obj1.pop();
    obj1.display();
    obj1.pop();
    obj1.display();
    obj1.pop();
    obj1.display();
    obj1.pop();
}
catch(int i)
{
    if(i==0) cout<<"\n stack is underflow !";
    else cout<<"\n stack is overflow !";
}
    stack<double>obj2;
try {
    obj2.push(7.5);
    obj2.push(25.5);
    obj2.pop();
    obj2.push(37.5);
    obj2.display();
    obj2.pop();
    obj2.pop();
    obj2.display();
    obj2.pop();
    obj2.pop();
}
catch(int i)
{
    if(i==0) cout<<"\n stack is underflow !";
    else cout<<"\n stack is overflow !";
}
    stack<complex>obj3;
try {
    obj3.push(7,5);
    obj3.display();
    obj3.push(25,35);
    obj3.display();
    obj3.pop();
    obj3.display();
    obj3.push(37,55.87);
    
    obj3.display();
    obj3.pop();
    obj3.display();
    obj3.pop();
    obj3.display();
    obj3.pop();
    obj3.display();
    obj3.pop();
 }
catch(int i)
{
    if(i==0) cout<<"\n stack is underflow !";
    else cout<<"\n stack is overflow !";
}

 return 0;
}