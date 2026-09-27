#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;
};

void addContent() {
    Content c;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, c.title);

    cout << "Enter Platform: ";
    getline(cin, c.platform);

    cout << "Enter Views: ";
    cin >> c.views;
    cin.ignore();

    cout << "Enter Status: ";
    getline(cin, c.status);

    ofstream file("content_list.txt", ios::app);

    file << c.title << ","
         << c.platform << ","
         << c.views << ","
         << c.status << endl;

    file.close();

    cout << "\nContent Added Successfully!\n";
}

vector<Content> readContent() {
    vector<Content> list;

    ifstream file("content_list.txt");

    string line;

    while (getline(file, line)) {

        Content c;

        string temp;

        stringstream ss(line);

        getline(ss, c.title, ',');
        getline(ss, c.platform, ',');

        getline(ss, temp, ',');
        c.views = stoi(temp);

        getline(ss, c.status, ',');

        list.push_back(c);
    }

    file.close();

    return list;
}

void displayContent() {

    vector<Content> list = readContent();

    cout << "\n===== Content List =====\n";

    for (int i = 0; i < list.size(); i++) {

        cout << i + 1 << ". "
             << list[i].title
             << " (" << list[i].platform << ")"
             << endl;
    }

    if (list.empty()) {
        cout << "No Content Found.\n";
    }
}

void updateStatus() {

    vector<Content> list = readContent();

    displayContent();

    int choice;

    cout << "\nSelect Content Number: ";
    cin >> choice;
    cin.ignore();

    if (choice < 1 || choice > list.size()) {
        cout << "Invalid Choice!\n";
        return;
    }

    cout << "Enter New Status: ";

    getline(cin, list[choice - 1].status);

    ofstream file("content_list.txt");

    for (Content c : list) {

        file << c.title << ","
             << c.platform << ","
             << c.views << ","
             << c.status << endl;
    }

    file.close();

    cout << "Status Updated Successfully!\n";
}

void deleteContent() {

    vector<Content> list = readContent();

    displayContent();

    int choice;

    cout << "\nSelect Content Number To Delete: ";
    cin >> choice;

    if (choice < 1 || choice > list.size()) {
        cout << "Invalid Choice!\n";
        return;
    }

    list.erase(list.begin() + choice - 1);

    ofstream file("content_list.txt");

    for (Content c : list) {

        file << c.title << ","
             << c.platform << ","
             << c.views << ","
             << c.status << endl;
    }

    file.close();

    cout << "\nContent Deleted Successfully!\n";

    displayContent();
}

int main() {

    int choice;

    do {

        cout << "\n===== Creator Dashboard Lite =====\n";
        cout << "1. Add Content\n";
        cout << "2. View Content\n";
        cout << "3. Update Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            addContent();
            break;

        case 2:
            displayContent();
            break;

        case 3:
            updateStatus();
            break;

        case 4:
            deleteContent();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}