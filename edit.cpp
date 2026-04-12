#include <iostream>
#include <string>
using namespace std;

int main() {
    const int l = 5;
    string name[l];
    int number[l];
    int count = 0, choice;
    do {
        cout << "\n1. Add\n2. View\n3. Delete\n4. Sort\n5. Average\n6. Exit\nChoice: ";
        cin >> choice;
        cin.clear();
        cin.ignore();
        system("clear"); 
        switch(choice) {
            case 1: 
                if(count < l) {
                    cout << "Name: ";
                    getline(cin, name[count]);
                    cout << "Grade: ";
                    cin >> number[count];
                    count++;
                } else {
                    cout << "Full\n";
                }
                break;
            case 2: {
                if (count == 0) { cout << "No Records Yet!\n"; break; }
                float sum = 0;
                for(int i = 0; i < count; i++) {
                    cout << i+1 << ". " << name[i]
                         << " - " << number[i] << endl;
                         sum  += number[i];
                }
                cout << "Average: " << sum / count << endl;
                break;
                }
            case 3: 
                if (count == 0) { cout << "No Records Yet!\n"; break; }
                int deluser;
                cout << "Select user to delete: "; // 1
                cin >> deluser;
                for (int i = deluser-1; i < count - 1; i++) {
                    name[i] = name[i+1];
                    number[i] = number[i+1];
                }
                cout << "User Deleted!\n";
                count--;               
                break;
            case 4:
                if (count == 0) { cout << "No Records Yet!\n"; break; }        
                for(int i = 0; i < count - 1; i++) {
                    for(int j = i +1; j < count; j++) {
                        if(name[i] > name[j]) {
                            swap(name[i], name[j]);
                            swap(number[i], number[j]);
                        }   
                    }      
                }         
                cout << "Sorted by name!\n";
                break;
            case 5: {
                float sum = 0;
                for(int i = 0; i < count; i++) {
                         sum  += number[i];
                     }
                cout << "Average: " << sum / count << endl;
                break;
                }
            case 6: 
                cout << "Program Exited!";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while(choice != 6);

    return 0;
}

