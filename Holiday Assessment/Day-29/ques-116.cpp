#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int quantity;
    double price;
};

int main() {
    Item inventory[100]; 
    int count = 0;     
    int choice;

    do {
        cout << "\nInventory Management System\n";
        cout << "1. Add Item\n";
        cout << "2. View Items\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
         {
             cout << "Enter item name: ";
              cin.ignore();
             getline(cin,inventory[count].name);
             cout << "Enter quantity: ";
             cin >> inventory[count].quantity;
             cout << "Enter price: ";
             cin >> inventory[count].price;
             count++;
             cout << "Item added successfully!\n";
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "Inventory is empty.\n";
            } else {
                cout << "\n--- Inventory List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << inventory[i].name
                         << " | Qty: " << inventory[i].quantity
                         << " | Price: " << inventory[i].price << "\n";
                }
            }
        }
        else if (choice == 3) {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}