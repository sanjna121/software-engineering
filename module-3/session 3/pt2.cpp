#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    void togglePublic() {
        isPublic = !isPublic;
    }
};

int main() {
    Playlist p;

    p.name = "Road Trip Songs";
    p.createdOn = "27-09-2026";
    p.isPublic = true;

    cout << "Initial: " << p.isPublic << endl;

    p.togglePublic();
    cout << "After 1st Toggle: " << p.isPublic << endl;

    p.togglePublic();
    cout << "After 2nd Toggle: " << p.isPublic << endl;

    return 0;
}