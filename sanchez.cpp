#include <iostream>
#include <string>
using namespace std;


void forgetPassword();
void createNewAccount();

int main() {
    string user, pass, num, gmail;
    int choice, subChoice;
    bool loginSuccess = false;

    cout << "1. Login\n2. Exist\nEnter choice 1 or 2: ";
    cin >> choice;

    if (choice == 1) {
        
        cout << "\nEnter username: ";
        cin >> user;
        cout << "Enter password: ";
        cin >> pass;
        cout << "Enter number: ";
        cin >> num;
        cout << "Enter Gmail: ";
        cin >> gmail;

        if (user == "admin" && pass == "admin123" && num == "09502808811" && gmail == "clintsanchez60@gmail.com") {
            cout << "\ngumagawa sya mare ko charr\n";
            loginSuccess = true;
        } else {
            cout << "\nDILI MAO IMING PASSWORD INDAY O INDOY MALI TANAN DILI LANG PASSWORD TANGGA YARN‼️\n";
            cout << "\n1. Forget password\n2. Create new account\nEnter choice: ";
            cin >> subChoice;

            if (subChoice == 1) {
                forgetPassword();
            } else if (subChoice == 2) {
                createNewAccount();
            } else {
                cout << "Invalid choice lang yan mare!\n";
            }
        }
    } else if (choice == 2) {
        cout << "exciting na kasi pagud na sya\n";
    } else {
        cout << "BULUKAS AMAW OH 1 OR 2 RA NGANI BUBU YARN‼️\n";
    }

    return 0;
}

// mao Ning forget password nimo kay Tanga kaman bubu kaba!!
void forgetPassword() {
    string regGmail;
    cout << "\n--- FORGET PASSWORD ---\n";
    cout << "Enter registered Gmail: ";
    cin >> regGmail;

    // Kani eh check ra nimo kung sakto imong tarantadung Gmail og password duh🙄//
    if (regGmail == "clintsanchez60@gmail.com") {
        cout << "Check mo yung Gmail mo mare!\n";
        cout << "New password sent: admin456\n";
    } else {
        cout << "Hindi yan yung registered Gmail mo!\n";
    }
}

//kung mag ilis ka og account baby ko//
void createNewAccount() {
    string newUser, newPass, newNum, newGmail;
    cout << "\n--- CREATE NEW ACCOUNT ---\n";
    cout << "Enter new username: ";
    cin >> newUser;
    cout << "Enter new password: ";
    cin >> newPass;
    cout << "Enter new number: ";
    cin >> newNum;
    cout << "Enter new Gmail: ";
    cin >> newGmail;

    cout << "\nAccount na create mo mare!\n";
    cout << "Your details:\n";
    cout << "Username: " << newUser << "\n";
    cout << "Number: " << newNum << "\n";
    cout << "Gmail: " << newGmail << "\n";
    cout << "Ingatan mo na yang account mo ha kasi Ikaw Hindi ka iningatan pok² mo kasi‼️\n";
}