#include <iostream> 
#include <string>   
#include <map>      

using namespace std; 

map<string, string> users_database;

void registerAccount() {
    string new_username, new_password, confirm_password;

    cout << "\n--- Gawa ng Bagong Account ---" << endl;
    cout << "Ilagay ang gustong Username: ";
    cin >> new_username;

    if (users_database.count(new_username)) { 
        cout << "May gumagamit na ng Username na 'yan. Subukan ang iba." << endl;
        return;
    }
    while (true) {
        cout << "ebutang ang Password: ";
        cin >> new_password;
        cout << "untroha ang Password gago!: ";
        cin >> confirm_password;

        if (new_password == confirm_password) {
            break;
        } else {
            cout << "Hindi tugma ang mga Password. Subukan ulit." << endl; }
        }
    users_database[new_username] = new_password;
    cout << "\nAccount mo Humana na bag o na!, " << new_username << "!" << endl;
}
void loginUser() {
    string username_input, password_input;
    int wrong_attempts = 0;

    cout << "\n--- Log-in---" << endl;
    while (wrong_attempts < 3) {
        cout << "butang imong Username: ";
        cin >> username_input;
        cout << "butang sad imong Password: ";
        cin >> password_input;
        if (users_database.count(username_input) && users_database[username_input] == password_input) {
            cout << "\nSuccessful ang Log-in! Welcome, " << username_input << "!" << endl;
            
            cout << "Imagine nasa Facebook profile ka na ngayon!" << endl;
            return; 
        } else {
            wrong_attempts++;
            if (wrong_attempts < 3) {
                cout << "Mali ang Username o Password. May " << (3 - wrong_attempts) << " attempts ka pa." << endl;
            } else {
                cout << "Mali ang Username o Password ng 3 beses. Balik sa Main Menu." << endl;
                return; 
            }
        }
    }
}

int main() {
    while (true) {
        cout << "\n--- Simple Log-in Portal ---" << endl;
        cout << "1. new account" << endl;
        cout << "2. log-in" << endl;
        cout << "3. exit" << endl;
        cout << " choice Option: ";

        string choice;
        cin >> choice;

        if (choice == "1") {
            registerAccount();
        } else if (choice == "2") {
            loginUser();      
        } else if (choice == "3") {
            cout << "Salamat sa paggamit oscar" << endl;
            break;
        } else {
            cout << "Mali imong oy untroha na bubu!." << endl;
        }
    }

    return 0;
}