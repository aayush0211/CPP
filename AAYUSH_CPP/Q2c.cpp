// this is main class where we have to include the room class we have created in Q1
#include <iostream>
#include "Room.h"

using namespace std;

int main() {
    const int num_rooms = 10;
    Room rooms[num_rooms] = {
        Room(1, "Conference Room A", 50, 100.0),
        Room(2, "Conference Room B", 30, 80.0),
        Room(3,"Conference Room C", 20,50.00),
        Room(4, "Conference Room D", 50, 100.0),
        Room(5, "Conference Room E", 80, 80.0),
        Room(6,"Conference Room F", 10,70.00),
        Room(7, "Conference Room G", 90, 500.0),
        Room(8, "Conference Room H", 90, 800.0),
       Room(9, "Conference Room I", 170, 70.0),
        Room(10, "Conference Room J", 35, 85.0)
        };

    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    cout << "\nRooms with capacity greater than or equal to " << num_students << ":\n";
    for (const Room& room : rooms) {
        if (room.getNumSeats() >= num_students) {
            double total_amount = room.calculateTotalAmount(num_students);
                cout << "Room ID: " << room.getRoomId()
                      << ", Room Name: " << room.getRoomName()
                      << ", Total Amount: Rs." << total_amount << endl;
        }
    }

    return 0;
}

