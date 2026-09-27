#include <iostream>
#include <fstream>
using namespace std;

class Playlist {
public:
    string name;

    Playlist(string n) {
        name = n;
    }

    Playlist() {
        ofstream file("autosave.txt");

        file << name;

        file.close();

        cout << "Playlist saved!" << endl;
    }
};

int main() {

    Playlist p("My Favourites");

    cout << "Playlist: " << p.name << endl;

    return 0;
}