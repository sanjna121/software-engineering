#include <iostream>
using namespace std;

class Product {
public:
    string name;
    float price;
    float rating;

    Product(string n, float p, float r) {
        name = n;
        price = p;
        rating = r;
    }

    void show() {
        cout << "Product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    Product p("iPhone", 50000, 4.5);

    p.show();

    return 0;
}