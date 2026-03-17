#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        cout << "\n===COLOR PICKER===\n";
        cout << "1. Red\n";
        cout << "2. Blue\n";
        cout << "3. Green\n";
        cout << "4. Exit\n";
        cout << "Pick a color: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "\033[31mYou picked RED!\033[0m\n";
                break;
                
            case 2:
                cout << "\033[34mYou picked BLUE!\033[0m\n";
                break;
                
            case 3:
                cout << "\033[32mYou picked GREEN!\033[0m\n";
                break;
                
            case 4:
                cout << "Goodbye!\n";
                break;
                
            default:
                cout << "Invalid choice! Pick 1-4 only.\n";
        }
        
    } while (choice != 4);
    
    return 0;
}