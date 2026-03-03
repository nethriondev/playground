#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int max_array = 5;
    string usernames[max_array] = {"admin", "user1", "guest", "negachan", "tabaranza"};
    string passwords[max_array] = {"admin123", "pass123", "guest123", "nega", "tabaranza123"};

    string inputUser, inputPass;
    int attempts = 0; // we start from 0 so when running while loop it will add 1 attempt every time it failed to login
    bool loginSuccess = false;

    while(attempts < 3 && !loginSuccess) { // 3 max attempts

        cout << "\nLogin System\n";

        cout << "Enter Username: ";
        cin >> inputUser;

        cout << "Enter Password: ";
        cin >> inputPass;

        for(int i = 0; i < max_array; i++) {

            if(inputUser == usernames[i] && inputPass == passwords[i]) {
                loginSuccess = true;
                break;
            }

        }

        if(loginSuccess) {
            cout << "Login Successful! Welcome " << inputUser << endl;
        } else {
            cout << "Invalid username or password.\n";
            attempts++;
        }
    }

    if(!loginSuccess) {
        cout << "\nAccount Locked after 3 failed attempts.\n";
    }

    return 0;
}