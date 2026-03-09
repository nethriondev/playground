#include <iostream>
#include <string>
using namespace std;

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