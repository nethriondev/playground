#include <iostream>
#include <string>
using namespace std;
int main() {
    string reguser, regpass, user, pass;
    cout << "register" << endl;
    cout << "user: ";
    cin >> reguser;
    cout << "pass: ";
    cin >> regpass;
    cout << "account registered!" << endl;
    system("clear");
    bool login = false;
    int attempt = 0;
    while (attempt < 3 && !login) {
        cout << "login" << endl;
        cout << "user: ";
        cin >> user;
        cout << "pass: ";
        cin >> pass;
        system("clear");
        if (user == reguser && pass == regpass) {
            cout << "login success!" << endl;
            login = true;
        } else {
            cout << "wrong pass or user!" << endl;
            attempt++;
        }
    }   
    if (attempt > 3 && !login) {
        cout << "account locked after many attempt!";
    }
    return 0;
}