#include<iostream>
#include<string>
using namespace std;

int main()
{
    string username, password;
    int choice;
    int attempts = 0;
    bool loggedIn = false;
    
    while (true) {
        cout << "Menu" << endl;
        cout << "1. Log in" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        if (choice == 1) {
            attempts = 0;
            loggedIn = false;
            
            while (attempts < 3 && !loggedIn) {
                cout << "Enter Username: " << endl;
                cin >> username;
                cout << "Enter password: " << endl;
                cin >> password;
                
                if (username == "admin" && password == "admin123") {
                    cout << "Welcome admin!" << endl;
                    loggedIn = true;
                } else {
                    cout << "Invalid login!" << endl;
                    attempts++;
                }
            }
            
            if (!loggedIn) {
                cout << "Too many failed attempts. System locked!" << endl;
            }
            
        } else if (choice == 2) {
            cout << "Exiting program..." << endl;
            break;
        } else {
            cout << "Invalid option" << endl;
        }
    }
    
    return 0;
}