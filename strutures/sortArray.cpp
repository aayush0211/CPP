#include<iostream>
using namespace std;

struct Car{
    public:
    string make;
    string model;
    int year;
   
};
 bool compare_car(const Car* car1, const Car* car2){
    return car1->year < car2->year;
}
void swapCars(Car*& car1, Car*& car2 ){
    Car *temp = car1;
    car1 = car2;
    car2 = temp;
}

void sort_cars(Car* car_array[], int num){
    for (int i = 0; i < num - 1; i++){
        for (int j = 0; j < num - i - 1;j++){
            if(compare_car(car_array[i],car_array[j])){
                swapCars(car_array[j], car_array[j+1]);
            }
        }
    }
}



int main(){
    Car car1={"Toyota", "Camry", 2020};
    Car car2 = {"Honda", "Civic", 2019};
    Car car3 = {"Ford", "Focus", 2021};

    Car* carArray[] = {&car1, &car2, &car3};
    int num = sizeof(carArray) / sizeof(carArray[0]);
cout << "Before sorting:\n";
    for (int i = 0; i < num; i++) {
 cout << carArray[i]->make << " " << carArray[i]->model << " " << carArray[i]->year << endl;
    }

    sort_cars(carArray, num);

    cout << "\nAfter sorting by year:\n";
    for (int i = 0; i < num; i++) {
        cout << carArray[i]->make << " " << carArray[i]->model << " " << carArray[i]->year << endl;
    }


        return 0;
}