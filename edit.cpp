#include <iostream>
using namespace std;

int main() {
    const int l = 5;
    string name[l];
    int number[l];
    int count = 0, choice;

    do {
        cout << "\n1 Add\n2 View\n3 Edit\n4 Delete\n5 Exit\nChoice: ";
        cin >> choice;
        cin.clear(); // to automatically invalidate wrong inputs and clears them. this is new i just discovered for example you put a string on integer input it would cause infinite loop adding cin.clear() would solve the issue : )
        cin.ignore(); // use this if there is a cin at first before the getline
        system("clear"); // optional
        switch(choice) {
            case 1: 
                if(count < l) {
                    cout << "Name: ";
                    getline(cin, name[count]);
                    cout << "Number: ";
                    cin >> number[count];
                    count++;
                } else {
                    cout << "Full\n";
                }
                break;
                
            case 2:
                if (count == 0) { cout << "No Records Yet!\n"; break; } // optional
                for(int i = 0; i < count; i++) {
                    cout << i+1 << ". " << name[i]
                         << " - " << number[i] << endl;
                }
                break;
                
            case 3: {
                if (count == 0) { cout << "No Records Yet!\n"; break; } // optional
                int i;
                cout << "Edit #: ";
                cin >> i;

                if(i >= 1 && i <= count) {
                    cout << "New Name: ";
                    getline(cin, name[i-1]); // minus 1 to match the array same logic
                    cout << "New Number: ";
                    cin >> number[i-1];
                } else {
                    cout << "Invalid\n";
                }
                break;
                }
            case 4: 
                if (count == 0) { cout << "No Records Yet!\n"; break; } // optional
                int deluser;
                cout << "Select user to delete: ";
                cin >> deluser;
                for (int i = 0; i < count; i++) {
                    if (i == deluser-1) { // minus 1 to match the array
                        for (int j = i; j < count - 1; j++) {
                            name[j] = name[j+1];
                            number[j] = number[j+1];
                        }
                        cout << "User Deleted!\n";
                        count--;
                    } 
                }
                break;
                
            case 5:  cout << "Program Exited!";
                break;
                
            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}