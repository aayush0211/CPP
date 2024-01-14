#include<iostream>
using namespace std;

class Animals{
    private:
        int i;
        public:
            virtual const char *getName() const = 0;
};
class Lion:public Animals{
    private:
        int j;
        public:
            const char* getName() const{
                             return "Lion";
            }

};
class Rat:public Animals{
    private:
        int k;
        public:
        const char* getName() const{
                             return "Rat";
        }
};
void printAnimalName(const Animals& obj){
        cout << "Hello " << obj.getName() <<" \n";
}
int main(){
        Lion obj1;
        Rat obj2;
        cout << "Size of Animals " << sizeof(Animals) << endl;
        printAnimalName(obj1);
        printAnimalName(obj2);

        // Animals obj3;               ----------> cannot declare obj 3 as Animal is now abstract class
        // printAnimalName(obj3);

        return 0;
}