#include <iostream>
#include <vector>
using namespace std;

class Playlist {
public:
    vector<string> songs;

    void addSong(string song) {
        songs.push_back(song);
    }

    void showSongs() {
        cout << "Songs List:" << endl;

        for(int i = 0; i < songs.size(); i++) {
            cout << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p;

    p.addSong("Kesariya");
    p.addSong("Tum Hi Ho");
    p.addSong("Love Me Like You Do");

    p.showSongs();

    return 0;
}