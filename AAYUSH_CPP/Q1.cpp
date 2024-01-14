
#include <iostream>
#include <string>

using namespace std;

// we created a class room here,
class Room {
private:
    int room_id;
    string room_name;
    int num_seats;
    double price_per_seat;

public:
    //here we created a parameterized constructor with all the data members
    Room(int id, const string& name, int seat, double price)
        : room_id(id), room_name(name), num_seats(seats), price_per_seat(price) {}

    
    // here I write a function to Calculate Total Price
    double calculateTotalPrice(int num_reserved_seats) const {
        if (num_reserved_seats <= 0) {
            return 0;  
        } else {
            double total_price = num_reserved_seats * price_per_seat;
            return total_price;
        }
    }

    // here , all the getters have been formed , in case we have to access any data members outside the class

    int getRoomId() const {
        return room_id;
    }

    // It a good practice to use const and in getters mostly you should use it , 
    //  -as we dont want to make any changes inside it mistakely , so it will prevent that from happening  
    const string& getRoomName() const {
        return room_name;
    }

    int getNumSeats() const {
        return num_seats;
    }

    double getPricePerSeat() const {
        return price_per_seat;
    }


};

// Q1 ends here


