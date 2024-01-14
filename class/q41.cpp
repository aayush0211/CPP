#include<iostream>
using namespace std;

class Array{
    int size;
    int *arr;

    public:
    Array():size(5),arr(new int[5]){
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
    }

    Array(int Inisize):size(Inisize), arr(new int[Inisize]){
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
    }
    Array(const Array& s):size(s.size), arr(new int[s.size]){
        for(int i=0;i<size;i++){
            arr[i] = s.arr[i];
        }
    }
    ~Array(){
        delete[] arr;
    }
    int& operator[](int index){
        if(index>=0 && index<size){
            return arr[index];
        }
        else
        {
            cout<<"Index out of bounds;"<<endl;
            exit(1);
        }
    }
    int getSize() const{
        return size;
    }

};
int main(){
    Array arr1;
    cout<<"Default constructor - Size: "<<arr1.getSize()<<endl;
    Array arr2(7);
    cout<<"Parametrized Constructor - Size: "<<arr2.getSize()<<endl;

    Array arr3 = arr2;
    cout<<"Copy constructor - Size: "<<arr3.getSize()<<endl;

    cout << "Element at index 2 in arr1: " << arr1[2] << std::endl;
    cout << "Element at index 2 in arr2: " << arr2[2] << std::endl;
}