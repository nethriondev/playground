#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
// I see it as elements because string are just an array of characters lol i notice it when using str[0] it actually works
// I'm not an expert but i just confirmed my theory is right :/
// Am i Ai? actually nope
// I learn it from: https://www.programiz.com/cpp-programming if you hate typing just chatgpt my location maam/sir! haha but make sures understand its logic
// If you want to learn more follow my platform https://oreo.gleeze.com/
// raw code no comments or explaination: https://pastebin.com/raw/RBZ8MW0c
/*
char string[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
      }
*/
    
string str = "Hello World"; // elements: H=0 e=1 l=2 l=3 o=4 space=5 W=6 o=7 r=8 l=9 d=10
cout << "Original: " << str << endl;
cout << "Origin String Length: " << str.length() << endl;

cout << "Single Char: " << str[1] << endl;  // take 'e' only

// (start element, number of characters)
string sub = str.substr(6, 5);  // "World = 5 characters" why 5? we take 5 characters only
cout << "Substring: " << sub << endl;

string added_word = str;
// start from element 5 that means we start at the space look at the top bruh!
added_word.insert(5, " Beautiful");  // "Hello Beautiful World"
cout << "Insert: " << added_word << endl;

string rep = str;
// replace start from element 6 = W we remove the 5 letters World
rep.replace(6, 5, "Universe");  // "Hello Universe"
cout << "Replace: " << rep << endl;

string del = str;
// world = 5 characters
// Start from space why end with 6? thats becuz we include space from deletion its counted as element
del.erase(5, 6);  // "Hello"
// Erases 6 chars from element 5 (space through 'd') → "Hello"
cout << "Erased: " << del << endl;

string append_word= str;
append_word.append(" HAHA");  // or str += "HAHA";
cout << "Append: " << append_word << endl;

string rev = str;
// begin = first element start from H = 0
// end = last element end with d = 10
reverse(rev.begin(), rev.end());
cout << "Reverse: " << rev << endl;

string caps = str;
transform(caps.begin(), caps.end(), caps.begin(), ::toupper);
cout << "CAPS: " << caps << endl; // HELLO WORLD

string lower = caps; // convert all caps to small
transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
cout << "Lower: " << lower << endl;
    return 0;
}