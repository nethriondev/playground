#include <iostream>
#include <string>
using namespace std;

int main() {
    const int limit = 5;
    string name[limit];
    int age[limit], grade[limit], count = 0, choice;  
    
    do {
        cout << "\n===MENU===\n1. Add Student\n2. View Students\n3. Search Student\n4. Delete Students\n5. Edit Student\n6. Exit\nChoice: ";
        cin >> choice; 
        cin.ignore();
        system("clear");
        
        switch(choice) {
            case 1: 
                if (count < limit) {
                    cout << "name: ";
                    getline(cin, name[count]);
                    cout << "age: "; 
                    cin >> age[count];
                    cout << "grade: "; 
                    cin >> grade[count];
                    cin.ignore(); 
                    cout << "Student Added!\n";
                    count++;
                } else {
                    cout << "Database is Full!\n";
                }
                break;           
                
            case 2:
                cout << "\n===Student List===\n";
                if (count == 0) {
                    cout << "No Students Found!\n";
                } else {
                    for (int i = 0; i < count; i++) {
                        cout << "\n[" << i + 1 << "]\nName: " << name[i] 
                             << "\nAge: " << age[i] 
                             << "\nGrade: " << grade[i] << "\n\n";
                    }
                }
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
                    if (search == name[i]) {
                        cout << "\n===Student Found===\n";
                        cout << "\n[" << i + 1 << "]\nName: " << name[i] 
                             << "\nAge: " << age[i] 
                             << "\nGrade: " << grade[i] << "\n";
                        found = true;
                    }
                }
                if (!found) {
                    cout << "Student name not Found\n";
                }
                break;
            }
            
            case 4: {
                string deleteName;
                bool found = false;
                cout << "Enter name to delete: ";
                getline(cin, deleteName);

                for(int i = 0; i < count; i++) {
                    if(name[i] == deleteName){
                        for(int j = i; j < count - 1; j++) {
                            name[j] = name[j+1];
                            age[j] = age[j+1];
                            grade[j] = grade[j+1];
                        }
                        count--;
                        cout << "Deleted successfully!" << endl;
                        found = true;
                        break;
                    }
                }

                if(!found){
                    cout << "Student not found!" << endl;
                }
                break;
            } 
            
            case 5: {
                if (count == 0) {
                    cout << "No students to edit!\n";
                    break;
                }
                int select; // declare tag pilian sa student array
                cout << "Select Student (1-" << count << "): ";
                cin >> select; 
                
                // optional rani
                if (select < 1 || select > count) {
                    cout << "Invalid selection!\n";
                    cin.ignore();
                    break;
                }
                
                cin.ignore();
                // sample unsaon pag edit
                cout << "New Name: ";
                getline(cin, name[select-1]); // minus ug wan para mo match sa array since ag array ga start sa element 0
                cout << "New Age: ";
                cin >> age[select-1];
                cout << "New Grade: ";
                cin >> grade[select-1];
                cin.ignore();
                cout << "Student Updated!\n";
                break;
            }
            
            case 6:
                cout << "Exiting...\n";
                break;
                
            default: 
                cout << "Invalid Choices select only from 1 to 6\n";
                break;
        }
    } while (choice != 6);    
    
    return 0;
}