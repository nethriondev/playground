#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice; 
    bool login = false;
    string loginuser, loginpass, user, pass, confirm;   
    while (!login) {
        cout << "\n--MENU--" << endl;
        cout << "1. Sign up" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Select Choice: ";
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            cout << "Create Username: ";
            getline(cin, user);
            cout << "Create Password: ";
            getline(cin, pass);
            while (pass != confirm) {
            cout << "Confirm Password: ";
            cin >> confirm;
            if(pass!= confirm) {
                cout << "\nPassword don't match enter pass again!\n";
            }
          }
        } else if (choice == 2) {
                cout << "Login user: ";
                getline(cin, loginuser);
                while (loginpass != pass && loginuser == user) {
                cout << "Login pass: ";
                getline(cin, loginpass);
                if(loginpass!= pass) {
                cout << "\nPassword don't match enter pass again!\n";
            }
                }
                if(loginuser != user) {
                cout << "user don't match try again!";
                }
                
                if (loginuser == user && loginpass == pass) {
                    login = true;
                    cout << "Welcome user: " << loginuser;
            break;
                }
        } else if (choice == 3) {
            cout << "Exited";
            break;
        }
        
    }
    return 0;
}