#include <iostream>
#include <string>
using namespace std;

int main() {
    const int dblimit = 5;
    string dbuser[dblimit] = {"admin", "nega"}; // database nato
    string dbpass[dblimit] = {"123", "123"};
    int usercount = 2;
    int choice;
    string user, pass;
    bool login = false;
    int attempt = 0;
    
    while (true) {
    cout << "\n--LOGIN PORTAL--" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Reset Password" << endl;
    cout << "4. Exit" << endl;
    cout << "Select Choice: ";
    cin >> choice;
    system("clear");
    
        if (choice == 1) {
            cout << "user: ";
            cin >> user;
            cout << "pass: ";
            cin >> pass;
            
            for (int i = 0; i < usercount; i++) {
                if (user == dbuser[i] && pass == dbpass[i]) {
                    login = true;
                    break;
                } else {
                    login = false;
                }
            }
            
             if (login) {
                   cout << "Welcome! " << user << endl;
                   attempt = 0;
               } else {
                   cout << "username or password is wrong" << endl;
                   attempt++; // +1 everytime magkamali ta
               }
               
            if (!login && attempt > 3) {
                cout << "Login Locked after many attempts." << endl;
            }
            
             cin.ignore();      
             cout << "Press Enter to go back menu";
             cin.get();
             system("clear");
             
        } else if (choice == 2) {
             cout << "user: ";
             cin >> user;
             cout << "pass: ";
             cin >> pass;
             
             if (usercount != dblimit) {
             // atong idagdag sa array
             dbuser[usercount] = user;
             dbpass[usercount] = pass;
             usercount++; // +1 add ug isa kay naa tay gipuno
             cout << "User added!" << endl;
             } else {
                 cout << "registed user has reached the maximum limit cannot add more sorri : <" << endl;
             }

             cin.ignore();
             cout << "Press Enter to go back menu";
             cin.get();
             system("clear");
             
        } else if (choice == 3) {
            cout << "---Reset Password---" << endl;
            cout << "Enter username: ";
            cin >> user;
            
            for (int i = 0; i < usercount; i++) {
                if (user == dbuser[i]) {
                    cout << "Enter new password: ";
                    cin >> pass;
                    dbpass[i] = pass;
                    cout << "Password reset for " << user << endl;
                    break;
                } else if (i == usercount - 1) {
                    cout << "User not found!" << endl;
                }
            }
            
            cin.ignore();
            cout << "Press Enter to go back menu";
            cin.get();
            system("clear");
            
        } else if (choice == 4) {
            cout << "Goodbye : /" << endl;
            cout << "Program Closed!";
            break;
        }
    }
    
    return 0;
}