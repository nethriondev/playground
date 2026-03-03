#include <iostream>
#include <string>
using namespace std;

#include <algorithm>
#include <unistd.h>

void greet(string name) {
    string caps = name;
    transform(caps.begin(), caps.end(), caps.begin(), ::toupper);
    int number;
    cout << "Hello, " << caps << "!" << endl;
    cout << "Input any number i try to gues: " << endl;
    cin.ignore();
    cin >> number;
    cout << "Trying possible numbers..." << endl;
    sleep(3);
    cout << "..." << endl;
    sleep(2);
    cout << "Wait a sec!" << endl;
    sleep(2);
    cout << "I Think its " << number << " lol?";
}

int main() {
    int max_array = 1;
    string username[max_array] = {"admin"};
    string password[max_array] = {"123"};
    
    string userinput, userpass;
    bool login = false;
    int tries = 0;
    
    while (tries < 3 && !login) {
        cout << "---Login Portal---" << endl;
        if (tries > 0) {
        cout << "Attempts: " << tries << endl;
        }
        cout << "input username: ";
        cin >> userinput;
        cout << "input password: ";
        cin >> userpass;
        
        for (int i = 0; i < max_array; i++) {
            if (userinput == username[i] && userpass == password[i]) {
                login = true;
                break;
            }
    }
    
        if (login) {
            cout << "Login Success! ";
            greet(userinput);
        } else {
            cout << "wrong pass or user! ";
            tries++;
        }
        cout << endl;  
        
}
        
        if (!login) {
            cout << "Maximum " << tries <<" retries reached Accout failed to login many times!";
        }
    
    return 0;
}