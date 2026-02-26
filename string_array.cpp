#include <iostream>
using namespace std;

int main() {
    int total = 0;
    char string[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
      for (int i = 0; string[i] != '\0'; i++) {
      cout << "Element " << i << ": " << string[i] << endl;
         total = i;
      }
      cout << "String: " << string << endl;
      cout << "Total: " << total + 1; // +1 cuz we started at 0
}
