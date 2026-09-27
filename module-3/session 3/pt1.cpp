#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
};

int main() {
    Playlist p;

    p.name = "My Favorites";
    p.createdOn = "27-09-2026";
    p.isPublic = true;

    cout << "Name: " << p.name << endl;
    cout << "Created On: " << p.createdOn << endl;
    cout << "Is Public: " << p.isPublic << endl;

    return 0;
}