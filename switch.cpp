#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];
    int id[5], grade[5], choice, count = 0;
    
    do {
        cout << "==MENU==\n";
        cout << "1. Add\n2. View\n3. Edit\n4. Delete\n5. Search\n6. Exit\n";
        cout << "Select Choice: ";
        cin >> choice;
        cin.ignore();
        system("clear");
        
        if (choice == 1) {
            if (count < 5) {
                cout << "Enter Name: ";
                getline(cin, name[count]);
                cout << "Enter Id: ";
                cin >> id[count];
                cout << "Enter Grade: ";
                cin >> grade[count];
                count++;
                cout << "Added!\n";
            } else {
                cout << "Database is Full!\n";
            }
        }
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                cout << "Index: " << i + 1 << endl;
                cout << "Name: " << name[i] << endl;
                cout << "ID: " << id[i] << endl;
                cout << "Grade: " << grade[i] << endl;
            }
        }
        else if (choice == 3) {
            int select;
            cout << "Select User from 1 - 5 to Edit: ";
            cin >> select;
            cin.ignore();
            cout << "Enter new Name: ";
            getline(cin, name[select-1]);
            cout << "Enter new ID: ";
            cin >> id[select-1];
            cout << "Enter new Grade: ";
            cin >> grade[select-1];
            cout << "User Updated!\n";
        }
        else if (choice == 4) {
            int select2;
            cout << "Select User from 1 - 5 to Delete: ";
            cin >> select2;
            for (int i = select2-1; i < count - 1; i++) {
                name[i] = name[i+1];
                id[i] = id[i+1];
                grade[i] = grade[i+1];
            }
            count--;
            cout << "User Deleted!\n";
        }
        else if (choice == 5) {
            string search;
            cout << "Search Name: ";
            getline(cin, search);
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (search == name[i]) {
                    cout << "Name: " << name[i] << endl;
                    cout << "ID: " << id[i] << endl;
                    cout << "Grade: " << grade[i] << endl;
                    found = true;
                }
            }
            if (found) {
                cout << "Search Found!\n";
            } else {
                cout << "Not Found!\n";
            }
        }
        
    } while (choice != 6);
    
    return 0;
}