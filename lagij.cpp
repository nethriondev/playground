#include <iostream>
#include <string>
using namespace std;

int main() {

    string storedUser, storedPass;
    string username, password;
    int choice;
    int attempts = 0;
    bool loggedIn = false;

    cout << "===== SIMPLE LOGIN SYSTEM =====\n";

    cout << "\nRegister a new account\n";
    cout << "Enter username: ";
    cin >> storedUser;

    cout << "Enter password: ";
    cin >> storedPass;

    cout << "\nRegistration successful!\n";

    cout << "\n===== LOGIN =====\n";

    while(attempts < 3 && !loggedIn) {

        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if(username == storedUser && password == storedPass) {
            cout << "\nLogin successful! Welcome " << username << "!\n";
            loggedIn = true;
        }
        else {
            cout << "Incorrect username or password.\n";
            attempts++;
        }
    }

    if(!loggedIn) {
        cout << "\nToo many failed attempts. Access denied.\n";
    }

    return 0;
}