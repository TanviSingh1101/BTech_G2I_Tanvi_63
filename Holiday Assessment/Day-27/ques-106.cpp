#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    int age;
    string department;
    float salary;
};

int main() {
    Employee employees[100]; 
    int count = 0;          
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. View Employees\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count < 100) {
                employees[count].id = count + 1; // Auto ID
                cout << "Enter name: ";
                cin.ignore(); 
                getline(cin, employees[count].name);
                cout << "Enter age: ";
                cin >> employees[count].age;
                cout << "Enter department: ";
                cin.ignore();
                getline(cin, employees[count].department);
                cout << "Enter salary: ";
                cin >> employees[count].salary;
                count++;
                cout << "✅ Employee added successfully!\n";
            } else {
                cout << "❌ Employee list is full!\n";
            }
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "No employees found.\n";
            } else {
                cout << "\n--- Employee List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << employees[i].id
                         << ", Name: " << employees[i].name
                         << ", Age: " << employees[i].age
                         << ", Dept: " << employees[i].department
                         << ", Salary: " << employees[i].salary << "\n";
                }
            }
        }
        else if (choice == 3) {
            cout << "Exiting... Goodbye!\n";
        }
        else {
            cout << "❌ Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}