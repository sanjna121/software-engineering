#include <iostream>
using namespace std;

class Ticket {
public:
    Ticket() {
        cout << "Ticket Booked!" << endl;
    }

    Ticket() {
        cout << "Saving your ticket..." << endl;
    }
};

int main() {
    {
        Ticket t;
        cout << "Ticket is active." << endl;
    }

    return 0;
}