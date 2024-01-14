#include<iostream>
using namespace std;


class Base{
        public:
            int i;
            Base(int v):i(v){
                cout << "Base \n";
            };
            //void f1();
};

class Derived1: virtual public Base{
    public:
    Derived1():Base(1){
                cout << "Derived 1 \n";
    }
};

class Derived2: virtual public Base{
    public:
    Derived2():Base(2){
                cout << "Derived 2 \n";
    }
};  
class Derived:public Derived1, public Derived2{
    public:
    Derived():Base(3){
                cout << "Derived \n";
    }
};

int main(){
    cout << "\nCreate Derived 1 object \n";
    Derived1 obj1;
    obj1.i = 10;
    cout << "i = " << obj1.i << "\n\n";
    cout << "Create Derived object \n";
    Derived objD;
    cout << "i= " << objD.i << "\n";
    objD.i = 100;
     cout << "Size of Base = " << sizeof(Base) << "\n";
    cout << "Size of Derived1 = " << sizeof(Derived1) << "\n";
    cout << "Size of Derived2 = " << sizeof(Derived2) << "\n";
    cout << "Size of Derived = " << sizeof(Derived) << "\n";


    return 0;
}