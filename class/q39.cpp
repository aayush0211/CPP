#include<iostream>
using namespace std;

class Complex
{
    int real;
    int imag;
public:
Complex():real(1), imag(2){}
Complex(int realPart, int imagPart):real(realPart), imag(imagPart){}

int getReal() const{
    return real;
}
int getImag() const{
    return imag;
}
void setReal(int realPart){
    real = realPart;
}
void setImag(int imagPart){
    imag = imagPart;
}
void display() const{
    cout<<real <<" + " <<imag <<"i"<< endl;
}
};

int main(){
    Complex complex1;
    Complex complex2(3,4);


    cout<<"complex number 1: ";
    complex1.display();

    cout << "Complex Number 2: ";
    complex2.display();

    complex1.setReal(1);
    complex1.setImag(-2);

    cout << "Updated Complex Number 1: ";
    complex1.display();

     cout << "Real part of Complex Number 2: " << complex2.getReal() << endl;
    cout << "Imaginary part of Complex Number 2: " << complex2.getImag() << endl;

    return 0;
}
