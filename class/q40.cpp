#include<iostream>
using namespace std;

class Complex
{
    int real;
    int imag;
    static int cnt;
public:
Complex():real(1), imag(2){
    cnt++;
}
Complex(int realPart, int imagPart):real(realPart), imag(imagPart){
    cnt++;
}

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
    static int objectCnt(){
        return cnt;
    }
};

int Complex::cnt = 0;

int main(){
    Complex complex1;
    Complex complex2(3,4);

    cout<<"No of complex object : "<<Complex::objectCnt();

    Complex complex3(1,1);
    Complex complex(6,9);

    cout<<"\nNo of complex object: "<<Complex::objectCnt();
    cout<<endl;

    return 0;
}