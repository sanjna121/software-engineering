#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    bool isPublic;

    void togglePublic()
    {
        isPublic = !isPublic;
    }
};

int main()
{
    Playlist p;

    p.name = "Hits";
    p.isPublic = true;

    cout << p.isPublic << endl;

    p.togglePublic();
    cout << p.isPublic << endl;

    p.togglePublic();
    cout << p.isPublic << endl;

    return 0;
}