#include <iostream>
using namespace std;

class Flipkart {
public:

    void searchProduct(string name) {
        cout << "Searching: " << name << endl;
    }

    void searchProduct(string name, string category) {
        cout << "Searching: " << name
             << " in " << category << endl;
    }
};

int main() {
    Flipkart f;

    f.searchProduct("iPhone");
    f.searchProduct("iPhone", "Mobiles");

    return 0;
}