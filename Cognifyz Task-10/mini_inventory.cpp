#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    Item items[50];
    int count = 0, choice, searchId;

    do {
        cout << "\nInventory Menu\n";
        cout << "1. Add Item\n2. Display Items\n3. Search by ID\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter ID: ";
                cin >> items[count].id;
                cout << "Enter Name: ";
                cin >> items[count].name;
                cout << "Enter Quantity: ";
                cin >> items[count].quantity;
                count++;
                cout << "Item added successfully!\n";
                break;

            case 2:
                cout << "\n--- Item List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << items[i].id
                        << ", Name: " << items[i].name
                        << ", Qty: " << items[i].quantity << endl;
                }
                break;

            case 3:
                cout << "Enter ID to search: ";
                cin >> searchId;
                for (int i = 0; i < count; i++) {
                    if (items[i].id == searchId) {
                        cout << "Item Found: " << items[i].name
                            << " (Qty: " << items[i].quantity << ")\n";
                        break;
                    }
                    if (i == count - 1)
                        cout << "Item not found.\n";
                }
                break;

            case 4:
                cout << "Exiting Inventory...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
