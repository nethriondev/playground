#include <iostream>
#include <string>
using namespace std;

/*
Menu Choices
1. add students >> input name, age, grade
2. view students list >> shows multi  results
3. search student name >> shows single result
4. Exit
*/

int main() {
    const int limit = 5;
    string name[limit];
    int age[limit], grade[limit], count = 0, choice;
    
    do {
        cout << "\n===MENU===\n1. Add Student\n2. View Students\n3. Search Student\n4. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();
        system("clear");
        switch(choice) {
            case 1: 
                if (count < limit) {
                    cout << "name: ";
                    getline(cin, name[count]);
                    cout << "age: "; cin >> age[count];
                    cout << "grade: "; cin >> grade[count];
                    cout << "Student Added!\n";
                    count++;
                } else cout << "Database is Full!\n";
                break;
                
            case 2:
                cout << "\n===Student List===\n";
                if (count == 0) cout << "No Students Found!\n";
                else for (int i = 0; i < count; i++) 
                    cout << "Name: " << name[i] << "\nAge: " << age[i] << "\nGrade: " << grade[i] << "\n\n";
                break;
                
            case 3: {
                if (count == 0) {
                    cout << "Database is Empty!\n";
                    break;
                }
                
                string search;
                cout << "Search name: ";
                getline(cin, search);
                bool found = false;
                
                for (int i = 0; i < count; i++) {
                    string firstName = name[i].substr(0, name[i].find(" "));
                    if (search == name[i] || search == firstName) {
                        cout << "\nName: " << name[i] << "\nAge: " << age[i] << "\nGrade: " << grade[i] << "\n";
                        found = true;
                    }
                }
                if (!found) cout << "Student name not Found\n";
                break;
            }
            case 4:
            cout << "Exiting...\n";
            break;
        }
    } while (choice != 4);
    
    return 0;
}