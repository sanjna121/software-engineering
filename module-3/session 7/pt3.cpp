#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string newSong;

    cout << "Enter a new song: ";
    getline(cin, newSong);

    ofstream file("my_fav_songs.txt", ios::app);

    file << newSong << endl;

    file.close();

    cout << "New song added successfully!" << endl;

    return 0;
}