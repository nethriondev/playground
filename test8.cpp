
// No Validation Short Code
#include <iostream>
#include <string>
#include <algorithm> // para sa reverse para dili na mag for loops
using namespace std;

// gama gama rani nako ayaw mo pag expect kani mo gawas sa exam mga lods

int main() {
    string str;
    int num;
    
    cout << "Try enter anyting e.g: Apple" << endl;
    cout << "Enter string: ";
    getline(cin, str);
    
    cout << "Try any number to get single letter from 0 to " << str.length() - 1 << endl;
    cout << "Enter number: ";
    cin >> num;
    
    cout << "Num: " << num << " = " << str[num] << endl;
    cout << "Total: " << str.length() - 1 << endl;
    
    string balihon = str;
    reverse(balihon.begin(), balihon.end());
    cout << "Reverse String: " << balihon << endl;
    
    cout << "Gusto ka magkuha og specifics string? example Apple pero ang resulta kay App" << endl;
    cout << "(yes/no): ";
    string choice;
    int start, end;
    cin >> choice;
    
    if (choice == "yes" || choice == "YES" || choice == "y" || choice == "Y") {
        cout << "e.g: 0" << endl;
        cout << "Enter Begin: ";
        cin >> start;
        cout << "e.g: 2" << endl;
        cout << "Enter End: ";
        cin >> end;
        
        string range = str.substr(start, end + 1);
        cout << range;
    } else {
        cout << "Ok Dili so mao ra to : )";
    }
    
    return 0;
}