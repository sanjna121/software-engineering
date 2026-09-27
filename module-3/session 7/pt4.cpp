#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string product;
    float price;

    ofstream file("wishlist.txt");

    for (int i = 1; i <= 3; i++) {

        cout << "Enter product " << i << ": ";
        getline(cin, product);

        cout << "Enter price: ";
        cin >> price;
        cin.ignore();

        file << product << " - Rs. " << price << endl;
    }

    file.close();

    ifstream readFile("wishlist.txt");

    cout << "\nMy Wishlist:" << endl;

    string line;

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}