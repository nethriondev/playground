#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string color;
    int count = 0;
    cout << "What is your favorite color? " << endl;
    getline(cin, color);
    
    int space = color.find(" ");
    string small = color.substr(0, space);
    
    if (small.empty()) {
        cout << "You didn't type anything!" << endl;
        return 1;
    }
    
    if (!all_of(small.begin(), small.end(), ::isalpha)) {
        cout << "Stop typing numbers/symbols!" << endl;
        return 1;
    }
    
    transform(small.begin(), small.end(), small.begin(), ::tolower);

    if (small == "black" || small == "brown") {
        while(count < 10) {
        cout << "Fuck you Nigga!" << endl;
        count++;
        }
    } else {
        cout << "Wow!";
    }
    
    return 0;
}