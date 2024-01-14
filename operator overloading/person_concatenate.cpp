#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        public:
        Person():name(""){}
        Person(string name){
            this->name = name;
        }
        void setter(){
            cout << "Enter a name \n";
            cin >> name;
        }
       
        Person operator+(const Person& obj1){
            Person result;
            result.name = this->name + obj1.name;
            return result;
        }
         void disp(){
            cout << "New string is " << name << endl;
        }
};

int main(){
        Person obj;
        Person obj2("Rohan");
        obj.setter();
        obj = obj + obj2;
        obj.disp();
        return 0;
}