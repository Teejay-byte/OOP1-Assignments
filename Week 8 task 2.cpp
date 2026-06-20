// room_booking.cpp
#include <iostream>
#include <string>

using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int numberOfDaysBooked;

public:
    // initialize booking info on creation
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        numberOfDaysBooked = days;
        cout << "Room booking confirmed" << endl;
    }

    // show the current booking details
    void displayBooking() {
        cout << "\n--- Booking Details ---" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Days Booked: " << numberOfDaysBooked << endl;
        cout << "-----------------------\n" << endl;
    }

    // output message when booking finishes
    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
};

int main() {
    // test the booking system
    RoomBooking myBooking("Alice Smith", 101, 3);
    
    myBooking.displayBooking();
    
    return 0; // destructor runs here
}