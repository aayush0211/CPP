// this is where we declare our class only

#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {
private:
    int room_id;
    std::string room_name;
    int num_seats;
    double price_per_seat;

public:
    Room(int id, const std::string& name, int seats, double price);
    double calculateTotalAmount(int num_reserved_seats) const;

   
    int getRoomId() const;
    const std::string& getRoomName() const;
    int getNumSeats() const;
    double getPricePerSeat() const;
};

#endif 
