#include <iostream>
#include <string>
using namespace std; 

int main() {
    float grade1, grade2, grade3, average;
    string name, course;
    cout << "Enter Name: " << endl;
    getline(cin, name);
    cout << "Enter Course: " << endl;
    getline(cin, course);
    cout << "Enter Grade 1: " << endl;
    cin >> grade1;
    cout << "Enter Grade 2: " << endl;
    cin >> grade2;
    cout << "Enter Grade 3: " << endl;
    cin >> grade3;
    
    average = grade1 + grade2 + grade3;
    average /= 3;
    
    cout << "---Student Information---" << endl;
    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Average: " << average << endl;
   // cout << "Status: " << (average >= 75 ? "Passed" : "Failed"); // Ternary Operator
   
   // conditional if-else statement
    if (average >= 75) {
        cout << "Status: Passed";
     } else {
        cout << "Status: Failed";
     }
    
    return 0;
}
