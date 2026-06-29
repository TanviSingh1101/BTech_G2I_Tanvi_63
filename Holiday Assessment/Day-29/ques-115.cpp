#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, str2;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n--- STRING MENU ---\n";
        cout << "1. Uppercase\n";
        cout << "2. Lowercase\n";
        cout << "3. Reverse\n";
        cout << "4. Concatenate another string\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (char &c : str) c = toupper(c);
                cout << "Uppercase: " << str << "\n";
                break;
            case 2:
                for (char &c : str) c = tolower(c);
                cout << "Lowercase: " << str << "\n";
                break;
            case 3:
                reverse(str.begin(), str.end());
                cout << "Reversed: " << str << "\n";
                break;
            case 4:
                cout << "Enter another string: ";
                getline(cin, str2);
                str += str2;
                cout << "Concatenated: " << str << "\n";
                break;
            case 0:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}