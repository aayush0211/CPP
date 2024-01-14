#include<iostream>
using namespace std;

class Complex{
    int real ;
    int imag;
    public:
        Complex():real(0),imag(0){}
        Complex(int realPart, int imagPart):real(realPart),imag(imagPart){
        }
        Complex(Complex &obj);

        void setReal(int realPart){
            real = realPart;
        }
        void setImag(int imagPart){
            imag = imagPart;
        }
        int getReal(){return real;}
        int getImag(){return imag;}
        void Display(){
            cout<<"Complex no is: "<<real<<" + "<<imag<<"i "<<endl;
        }
        Complex operator+(Complex c2){
            Complex c3;
            c3.real = real+c2.real;
            c3.imag = imag+c3.imag;
            
            return c3;
        }
        Complex operator-(Complex c2){
            Complex c3;
            c3.real = real-c2.real;
            c3.real = imag-c2.imag;

            return c3;
        }
        Complex operator++(){
            Complex c;
            c.real=++real;
            c.imag=++imag;
            return c;
        }
        Complex operator--(){
            Complex c;
            c.real=--real;
            c.imag=--imag;
            return c;
        }
        Complex operator++(int){
            Complex c;
            c.real=real++;
            c.imag=imag++;
            return c;
        }

        void cal(Complex c1, Complex c2){
            while(true){
                cout<<"MENU..............: "<<endl;
                cout<<"Enter choice of the following operation: \n";
                cout<<"1) ADDITION \n2)SUBSTRACTION \n3)NEGATIVE \n4)PRE-INCREMENT \n5)PRE-DECREMENT \n6)POST-INCREMENT \n7)EXIT "<<endl;
                int choice;
                cin>>choice;
                Complex c;
                switch(choice){
                    case 1: c=c1+c2;
                        cout<<"sum result: "<<c.real<< "+"<<c.imag<<"i"<<endl;
                        break;
                    case 2: c=c1-c2;
                        cout<<"sub result: "<<c.real<< "-"<<c.imag<<"i"<<endl;
                        break;
                    case 3: c=*this-c2;
                        cout<<"result: "<<c.real<< "+"<<c.imag<<"i"<<endl;
                        break;
                    case 4: c=++c1;
                        cout<<"After increment: "<<c.real<< "+"<<c.imag<<"i"<<endl;
                        break;
                    case 5: c=--c1;
                        cout<<"After decrement: "<<c.real<< "+"<<c.imag<<"i"<<endl;
                        break;
                    case 6: c=c1++;
                        cout<<"After post-increment: "<<c.real<< "+"<<c.imag<<"i"<<endl;
                        break;
                    case 7: cout<<"Adios! \n";
                            exit(0);
                            break;
                }
            }
        }
        
};
Complex::Complex(Complex &c){
    real = c.real;
    imag = c.imag;
}

int main(){
    Complex c0,c1(10,20),c2(c1);
    cout<<"Real part of c0 is: "<<c0.getReal()<<" and imaginary part is: "<<c0.getReal()<<endl;
  
    c2.setReal(5);c2.setImag(7);
    c2.getReal(); c2.getImag();
      c0.Display();
    c1.Display();
    c2.Display();

    c0.cal(c1,c2);
    cout<<endl;
    return 0;
}