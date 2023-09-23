#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
    // write a paragraph about the list data strucutre above, its usage, and the main methods that can be used on it.
protected:
    string OwnerName;
    int contentQuality;
public:
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        contentQuality = 0;
    }
    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle << endl;
        }
    }
    void Subscribe() {
        SubscribersCount++;
    }
    void Unsubscribe() {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
    void Ratecontent() {

        if (contentQuality > 5) {
            
            cout << "Content is good" << endl;
        }
        else {
            cout << "Content is bad" << endl;
        }
    }


};

class CookingYouTubeChannel :public YouTubeChannel {
public:
    CookingYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

    }
    void Practice() {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        contentQuality++;
    }
};

class SingersYouTubeChannel :public YouTubeChannel {
public:
    SingersYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

    }
    void Practice() {
        cout << OwnerName << " is taking singing lessons, learning new music, experimenting with tunes..." << endl;
        contentQuality++;
    }
};

int main()
{
    CookingYouTubeChannel cook("Ali's Kitchen", "Ali");
    SingersYouTubeChannel sing("Rana's Studio", "Rana");

    cook.Practice();
    for (int i = 0; i < 6; i++) {
        sing.Practice();
    }
    cook.Ratecontent();
    sing.Ratecontent();

    // call the function RateContent on both objects. You can only use 4 lines of code. Explain these lines in a few comments.

    return 0;
}
