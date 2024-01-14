 //In BigInt class overload following operators:
 //  Binary operators + - * / to work with
 //  - both operands of type BigInt
 //  - one BigInt operand and one int
 //  Unary operators ++ and -- in both pre and post form.
 //  Also write a small program to demonstrate the use of BigInt class and overloaded operators.
#include<iostream>
using namespace std;
class bigint{
    int num;
    public:

    bigint(): num(0){}

    bigint( int no1): num(no1){}

    void operator+(bigint b1){
        cout<<"add of two object is....:  "<<num+b1.num<<endl;
    }
    friend void operator+(int a, bigint b1);

    void operator-(bigint b1){
        cout<<"sub of two object is....:  "<<num-b1.num<<endl;
    }
    friend void operator-(int a,bigint b1);

   void operator*(bigint b1){
        cout<<"multi of two object is.....:  "<<num*b1.num<<endl;
   }

    friend void operator*(int a,bigint b1);
    

    void operator/(bigint b1){
        cout<<"div of two object is....:  "<<num/b1.num<<endl;
    }

    friend void operator/(int a,bigint b1);

    void operator++(int){
        cout<<"post increment is.....:before is  "<<num++<<"  after increment is...:  "<<num<<endl;
    }

     void operator++(){
        cout<<"pre increment is.....:   "<<++num<<endl;
     }
};

    void operator+(int a,bigint b1){
        cout<<"addition between object and integer is.....:  "<<b1.num+a<<endl;
    }

    

    void operator-(int a,bigint b1){
        cout<<"subtraction of object and int is.....:  "<<b1.num-a<<endl;
    }

    

    void operator*(int a,bigint b1)
    {
        int result=b1.num*a;
        cout<<"multiply of object and int is......:   "<<result<<endl;
    }

   

    void operator/(int a,bigint b1){
        cout<<"division of object to int is....:  "<<b1.num/a<<endl;
    }

    

int main(){
        bigint b1(10),b2(20),b3;
        int a=5;
        b1+b2;
        a+b1;

        b2-b1;
        a-b2;

        b2*b1;
        b2*a;

        b2/b1;
        b2/a;

        b2++;

        ++b2;
    
        return 0;
}