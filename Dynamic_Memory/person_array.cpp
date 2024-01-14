#include<iostream>
using namespace std;
class Person{
        public:
        string name;
        int age;
        
        Person():name(""),age(0){}
        Person(const string& name, int age){
            this->name=name;
            this->age = age;
        }
};

int main(){
        int size = 2;

        Person *parray = new Person[size];

        for (int i = 0; i < size;i++){
            cout << "\nname of Person " << i + 1 << " is: ";
            cin>> parray[i].name;
            cout << "\nPerson" << i + 1 << " age is:  ";
            cin>> parray[i].age;
        }
        cout << endl;

        for (int i = 0; i < size;i++){
        Person *ptr = &parray[i];
         cout << "\nname of Person " << i+1<<" is: " <<ptr->name;
        cout << "\nPerson" << i+1 << " age is:  " << ptr->age;

        //ptr->age + 1;
        }
        cout << endl;
        return 0;
}      