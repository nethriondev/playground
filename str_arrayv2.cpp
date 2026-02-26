#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[100];
    int ages[100];
    double grades[100];
    int choice;
    int count = 0;
    
    do {
        system("clear");
        
        cout << "=== STUDENT INFO SYSTEM ===" << endl;
        if (count > 0) {
            cout << "Total: " << count << " student(s)" << endl;
        }
        cout << "===========================" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Student" << endl;
        cout << "3. Exit" << endl;
        cout << "===========================" << endl;
        cout << "Choice: ";
        cin >> choice;
        cin.ignore(); // <= clears junk to avoid conflicts
        system("clear"); // <= cleans up terminal or output
        if (choice == 1) {
            cout << "=== ADD STUDENT ===" << endl;
            cout << "Student " << count + 1 << endl;
            cout << "Name: ";
            getline(cin, names[count]);
            cout << "Age: ";
            cin >> ages[count];
            cout << "Grade: ";
            cin >> grades[count];
            cin.ignore(); // same logic
            count++;
            if (cin.fail()) { // <= validate input incase accidentally put letters on numbers
            cout << "Invalid input! Program will exit." << endl;
            return 1;
        }
            cout << "=== Added! ===" << endl;
            cout << "Press Enter...";
            cin.get(); // <= pauses program wwait for use to hit enter
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "=== NO STUDENTS ===" << endl;
                cout << "Press Enter...";
                cin.get(); // same logic
            }
            else {
                cout << "=== STUDENT LIST ===" << endl;
                for(int i = 0; i < count; i++) {
                    cout << i+1 << ". " << names[i] << endl;
                }
                cout << "====================" << endl;
                
                int num;
                cout << "Which to display? (1-" << count << "): ";
                cin >> num;
                if (cin.fail()) { // same logic
                cout << "Invalid input! Program will exit." << endl;
                return 1;
             }
                system("clear"); // same logic
                
                if(num >= 1 && num <= count) {
                    int i = num-1;
                    cout << "=== STUDENT " << num << " ===" << endl;
                    cout << "Name: " << names[i] << endl;
                    cout << "Age: " << ages[i] << endl;
                    cout << "Grade: " << grades[i] << endl;
                    cout << "================" << endl;
                }
                else {
                    cout << "=== INVALID ===" << endl;
                }
                cin.ignore(); // same logic
                cout << "Press Enter...";
                cin.get(); // same logic
            }
        }
        system("clear");
        
    } while (choice != 3);
    
    cout << "=== GOODBYE ===" << endl;
    cout << "Total students: " << count << endl;
    cout << "===============" << endl;
    
    return 0;
}