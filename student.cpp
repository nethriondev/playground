#include <iostream>
using namespace std;

int main() {

    string name[5];
    int age[5];
    int grade[5];
    int count = 0;
    int choice;

    do {

        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {

        case 1:

            if(count < 5) {
                cout << "Enter Student Name: ";
                getline(cin, name[count]);
                cout << "Enter Age: ";
                cin >> age[count];
                cout << "Enter Grade: ";
                cin >> grade[count];
                cout << "Student added successfully!\n";
                count++;
            }
            else {
                cout << "Student list is full.\n";
            }

            break;

        case 2:
            cout << "\nSTUDENT LIST\n";
            for(int i = 0; i < count; i++) {
                cout << "\nStudent " << i + 1 << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Age: " << age[i] << endl;
                cout << "Grade: " << grade[i] << endl;
            }

            break;

        case 3:
            string searchName;
            bool found = false;

            cout << "Enter student name to search: ";
            cin >> searchName;

            for(int i = 0; i < count; i++) {
                if(name[i] == searchName) {
                    cout << "\nStudent Found\n";
                    cout << "Name: " << name[i] << endl;
                    cout << "Age: " << age[i] << endl;
                    cout << "Grade: " << grade[i] << endl;
                    found = true;
                }
            }

            if(!found) {
                cout << "Student not found.\n";
            }

            break;

        }

    } while(choice != 4);

}