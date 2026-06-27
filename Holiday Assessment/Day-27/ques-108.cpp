#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNumber, numSubjects;
    float marks[10], total = 0, percentage;
    char grade;

    cout << "===== Student Marksheet Generation System =====\n";
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cout << "Enter number of subjects (1-10): ";
    cin >> numSubjects;
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    percentage = total / numSubjects;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';
    cout << "\n===== Marksheet =====\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << rollNumber << endl;
    cout << "Subjects   : " << numSubjects << endl;
    for (int i = 0; i < numSubjects; i++) {
        cout << "Subject " << i + 1 << " : " << marks[i] << endl;
    }
    cout << "Total Marks: " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;
    cout << "=====================\n";

    return 0;
}