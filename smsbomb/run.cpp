#include <iostream>
#include <cstdlib>
using namespace std;

string red = "\033[1;31m";
string green = "\033[1;32m";
string yellow = "\033[1;33m";
string blue = "\033[1;34m";
string cyan = "\033[1;36m";
string reset = "\033[0m";

int main() {
    string phone, amount;
    
    cout << cyan << "Enter phone number: " << reset;
    cin >> phone;
    
    cout << yellow << "Enter amount: " << reset;
    cin >> amount;
    
    string command = "node smsbomb.js " + phone + " " + amount;
    cout << "\n" << blue << "Executing: " << reset << command << "\n\n";
    
    int result = system(command.c_str());
    
    if(result == 0)
        cout << "\n" << green << "Done!" << reset << "\n";
    else
        cout << "\n" << red << "Failed!" << reset << "\n";
        
    return 0;
}