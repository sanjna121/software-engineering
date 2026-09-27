#include <iostream>
using namespace std;

class InstaStory {
protected:
    int storyViews;

public:
    InstaStory() {
        storyViews = 5000;
    }
};

class SponsoredStory : public InstaStory {
public:
    void displayViews() {
        cout << "Story Views: " << storyViews << endl;
    }
};

int main() {

    SponsoredStory story;

    story.displayViews();

    return 0;
}