#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        char c = tolower(s[i]); // para hindi sensitive sa capital letters
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    cout << "Number of vowels: " << count << endl;
}