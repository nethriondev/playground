#include <iostream>
using namespace std;

int main() {
    string username, password, confirm;
    string savedUser, savedPass;
    int choice;
    int attempts = 3;

    cout << "=== Menu ===\n";
    cout << "1. Sign up\n";
    cout << "2. Log in\n";
    cout << "3. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    if(choice == 1) {
        cout << "\n=== Sign up ===\n";
        cout << "Create username: ";
        getline(cin, savedUser);

        while(true) {
            cout << "Create password: ";
            getline(cin, password);

            cout << "Confirm password: ";
            getline(cin, confirm);

            if(password == confirm) {
                savedPass = password;
                cout << "Password confirmed\n";
                cout << "Account created successfully\n";
                break;
            } else {
                cout << "Password do not match\n";
            }
        }
    }

    cout << "\nMenu\n";
    cout << "1 Sign in\n";
    cout << "2 Log in\n";
    cout << "3 Exit\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    if(choice == 2) {
        string user, pass;
        cout << "\nLog in\n";

        while(attempts > 0) {
            cout << "Enter username: ";
            getline(cin, user);

            cout << "Enter password: ";
            getline(cin, pass);

            if(user == savedUser && pass == savedPass) {
                cout << "Login successfully\n";
                break;
            } else {
                attempts--;
                cout << "Wrong username or password\n";
                cout << "Attempts left: " << attempts << endl;
            }

            if(attempts == 0) {
                cout << "Too many failed attempts. Access denied.\n";
            }
        }
    }

    return 0;
}