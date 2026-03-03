#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int numSubjects;
    float totalUnits = 0, totalGrade = 0;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Number of Subjects: ";
    cin >> numSubjects;

    for (int i = 0; i < numSubjects; i++) {
        string subject;
        float grade, units;

        cout << "Enter Subject " << i + 1 << ": ";
        cin.ignore();
        getline(cin, subject);

        cout << "Enter Grade (1.0 - 5.0): ";
        cin >> grade;

        cout << "Enter Units: ";
        cin >> units;

        totalUnits += units;
        totalGrade += grade * units;
    }

    float gpa = totalGrade / totalUnits;

    cout << "Student Name: " << name << endl;
    cout << "GPA: " << gpa << endl;

    if (gpa >= 1.0 && gpa <= 1.75) {
        cout << "Dean's Lister" << endl;
    } else if (gpa >= 1.76 && gpa <= 2.5) {
        cout << "Good Standing" << endl;
    } else if (gpa >= 2.51 && gpa <= 3.0) {
        cout << "Probation" << endl;
    } else {
        cout << "Failed" << endl;
    }

    return 0;
}
