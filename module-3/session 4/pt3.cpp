#include <iostream>
using namespace std;

class Movie {
public:
    string name;
    int year;

    Movie(string n, int y) {
        name = n;
        year = y;
    }

    Movie(Movie &m) {
        name = m.name;
        year = m.year;
    }
};

int main() {
    Movie m1("Jawan", 2023);
    Movie m2(m1);

    cout << "Original: " << m1.name << " " << m1.year << endl;
    cout << "Copy: " << m2.name << " " << m2.year << endl;

    return 0;
}