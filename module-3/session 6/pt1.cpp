#include <iostream>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    
    void setTitle(string t) {
        title = t;
    }

    void setArtist(string a) {
        artist = a;
    }

    string getTitle() {
        return title;
    }

    string getArtist() {
        return artist;
    }
};

int main() {

    Song s1;

    s1.setTitle("Kesariya");
    s1.setArtist("Arijit Singh");

    s1.setTitle("Tum Hi Ho");

    cout << "Song Title: " << s1.getTitle() << endl;
    cout << "Artist: " << s1.getArtist() << endl;

    return 0;
}