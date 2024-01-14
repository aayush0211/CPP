#include<iostream>
using namespace std;

class Animal{
    private:
    string name;
    public:
        Animal(const string &name) : name(name) { cout << "\nAnimal \n"; }
        virtual void speak() const = 0;
    const string& getName() const{
        return name;
    }
};

class Mammal:virtual public Animal{
    public:
        Mammal(const string &name) : Animal(name) { cout << "\nMammal \n"; }
        void speak() const{
        cout << "Mammal named " << getName() << " makes a mammal sound. " << endl;
    }
};

class Bird:virtual public Animal{
    public:
        Bird(const string &name) : Animal(name) { cout << "\nBird \n"; }
        void speak() const
        {
        cout << "Bird named " << getName() << " makes a Bird sound." << endl;
    }
};

class Bat:public Mammal,public Bird{
    public:
        Bat(const string &name) : Animal(name), Mammal(name), Bird(name) { cout << "\nBat \n"; }
        void speak() const{
        cout << "Bat named " << getName() << " makes a Bat sound." << endl;
    }

};

int main(){
    Bat bat("Batty");
    bat.speak();
    cout << "\nsize of Bat\n" << sizeof(Bat) << endl;

    bat.Mammal::speak();
    cout << "\nsize of Mammal\n" << sizeof(Mammal) << endl;
    bat.Bird::speak();
cout << "\nsize of Bird\n" << sizeof(Bird) << endl;
   // bat.Animal::speak();
    cout << "\nsize of Animal\n" << sizeof(Animal) << endl;

    cout << endl;
    return 0;
}