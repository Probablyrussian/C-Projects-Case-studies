#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

class Reservation {
public:
    string name;
    int roomNumber;
    Reservation(string n, int r) {
        name = n;
        roomNumber = r;
    system ("CLS");
    }
};

class Hotel {
public:
    vector<Reservation> reservations;
    void reserveRoom(string name, int roomNumber) {
        Reservation r(name, roomNumber);
        reservations.push_back(r);
        cout << "Room " << roomNumber << " reserved for " << name << endl;
    }

    void cancelReservation(int roomNumber) {
        for (int i = 0; i < reservations.size(); i++) {
            if (reservations[i].roomNumber == roomNumber) {
                cout << "Reservation for room " << roomNumber << " canceled for " << reservations[i].name << endl;
                reservations.erase(reservations.begin() + i);
                return;
            }
        }
        cout << "No reservation found for room " << roomNumber << endl;
    }
    void displayReservations() {
        if (reservations.size() == 0) {
            cout << "No reservations made yet" << endl;
            return;
        }
        cout << "Current reservations:" << endl;
        for (int i = 0; i < reservations.size(); i++) {
            cout << "Room " << reservations[i].roomNumber << " reserved for " << reservations[i].name << endl;
        }
    }
};

int main() {
    Hotel hotel;

    while (true) {
        cout <<"Please Enter #:" <<endl;
        cout <<" (1) to reserve a room" <<endl;
        cout <<" (2) to cancel a reservation"<<endl;
        cout <<" (3) to display all reservations"<<endl;
        cout <<" (4) to exit:"<<endl;
        int choice;
        cout<<"Enter your choice here: ";
        cin >> choice;


        if (choice == 1) {
            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter the room number you would like to reserve: ";
            int roomNumber;
            cin >> roomNumber;
            hotel.reserveRoom(name, roomNumber);
        } else if (choice == 2) {
            cout << "Enter the room number of the reservation you would like to cancel: ";
            int roomNumber;
            cin >> roomNumber;
            hotel.cancelReservation(roomNumber);
        } else if (choice == 3) {
            hotel.displayReservations();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}

