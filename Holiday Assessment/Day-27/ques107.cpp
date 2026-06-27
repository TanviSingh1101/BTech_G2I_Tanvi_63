#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float basic, allowance, deduction;
};

int main() {
    Employee employees[100]; 
    int count = 0;          
    int choice;
    int nextId = 1;

    while (true) {
        cout << "\n=== Salary Management System ===\n";
        cout << "1. Add Employee\n";
        cout << "2. View Employees\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count >= 100) {
                cout << "Storage full!\n";
                continue;
            }
            employees[count].id = nextId++;
            cout << "Enter name: ";
            cin.ignore();
            cin.getline(employees[count].name, 50);
            cout << "Enter basic salary: ";
            cin >> employees[count].basic;
            cout << "Enter allowance: ";
            cin >> employees[count].allowance;
            cout << "Enter deduction: ";
            cin >> employees[count].deduction;
            count++;
            cout << "Employee added!\n";
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "No employees found.\n";
            } else {
                cout << "\nID\tName\t\tNet Salary\n";
                for (int i = 0; i < count; i++) {
                    float net = employees[i].basic + employees[i].allowance - employees[i].deduction;
                    cout << employees[i].id << "\t" << employees[i].name << "\t\t" << net << "\n";
                }
            }
        }
        else if (choice == 3) {
            cout << "Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}