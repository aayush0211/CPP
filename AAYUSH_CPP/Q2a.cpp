//this is where we define our room class which we have declared in Room.h
#include "Room.h"

using namespace std;

Room::Room(int id, const string& name, int seats, double price)
    : room_id(id), room_name(name), num_seats(seats), price_per_seat(price) {}

double Room::calculateTotalAmount(int num_reserved_seats) const {
    if (num_reserved_seats <= 0) {
        return 0.0;  
    } else {
        return num_reserved_seats * price_per_seat;
    }
}

int Room::getRoomId() const {
    return room_id;
}

const string& Room::getRoomName() const {
    return room_name;
}

int Room::getNumSeats() const {
    return num_seats;
}

double Room::getPricePerSeat() const {
    return price_per_seat;
}
