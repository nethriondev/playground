//No  Explaination

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
string str = "Hello World";
cout << "Original: " << str << endl;
cout << "Origin String Length: " << str.length() << endl;

cout << "Single Char: " << str[1] << endl;

string sub = str.substr(6, 5);
cout << "Substring: " << sub << endl;

string added_word = str;
added_word.insert(5, " Beautiful");
cout << "Insert: " << added_word << endl;

string rep = str;
rep.replace(6, 5, "Universe");
cout << "Replace: " << rep << endl;

string del = str;
del.erase(5, 6);
cout << "Erased: " << del << endl;

string append_word= str;
append_word.append(" HAHA");
cout << "Append: " << append_word << endl;

string rev = str;
reverse(rev.begin(), rev.end());
cout << "Reverse: " << rev << endl;

string caps = str;
transform(caps.begin(), caps.end(), caps.begin(), ::toupper);
cout << "CAPS: " << caps << endl;

string lower = caps;
transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
cout << "Lower: " << lower << endl;
    return 0;
}