// name Dania Khan
// ID 23k-0072

#include<iostream>
#include<string>
using namespace std;

class Stationary{
private:
    static const int MAX_ITEMS = 100;
    string sell_items[MAX_ITEMS];
    string prices[MAX_ITEMS];
    int num_items;
    int quantities[MAX_ITEMS]; // Track quantities of each item

public:
    Stationary(){
        num_items = 0;
    }

    void addItems(){
        cout << "How many new items do you want to add? ";
        int new_items;
        cin >> new_items;

        if (num_items + new_items <= MAX_ITEMS){
            for (int i = num_items; i < num_items + new_items; ++i){
                cout << "Enter item " << i + 1 << ": ";
                cin >> sell_items[i];

                cout << "Enter price: ";
                cin >> prices[i];

                quantities[i] = 0; // Initialize quantity to 0
            }
            num_items += new_items;
            cout << "Items added successfully.\n";
        }
        else{
            cout << "Not enough space in inventory to add " << new_items << " items.\n";
        }
    }

    void retrieveItems(){
        cout << "Items in the shop:\n";
        for (int i = 0; i < num_items; ++i){
            cout << sell_items[i] << " - $" << prices[i] << endl;
        }
    }

    void modifyPrices(){
        string item;
        cout << "Enter item to modify price: ";
        cin >> item;

        // Search for the item
        for (int i = 0; i < num_items; ++i){
            if (sell_items[i] == item){
                cout << "Enter new price: ";
                cin >> prices[i];
                cout << "Price updated successfully.\n";
                return;
            }
        }
        cout << "Item not found.\n";
    }

    void display(){
        retrieveItems(); // Just display items and prices
    }

    void takeOrder(){
        cout << "Enter the items and quantities bought by the customer. Enter 'done' to finish.\n";
        string item;
        int quantity;

        while (true){
            cout << "Item: ";
            cin >> item;
            if (item == "done")
                break;

            cout << "Quantity: ";
            cin >> quantity;

            // Find the item in the list
            bool found = false;
            for (int i = 0; i < num_items; ++i){
                if (sell_items[i] == item){
                    quantities[i] += quantity; // Increment quantity
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Item not found.\n";
        }
    }

    void generateReceipt(){
        double total = 0.0;
        cout << "Receipt:\n";
        for (int i = 0; i < num_items; ++i){
            if (quantities[i] > 0){
                cout << sell_items[i] << " x " << quantities[i] << " = $" << stod(prices[i]) * quantities[i] << endl;
                total += stod(prices[i]) * quantities[i]; // Convert price to double before calculation
            }
        }
        cout << "Total: $" << total << endl;
    }
};

int main(){
    Stationary myShop;
    int choice;

    do{
        cout << "\nMenu:\n";
        cout << "1. Add items\n";
        cout << "2. Retrieve list of items\n";
        cout << "3. Modify prices of items\n";
        cout << "4. Display all items and prices\n";
        cout << "5. Take customer order\n";
        cout << "6. Generate receipt\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
            case 1:
                myShop.addItems();
                break;
            case 2:
                myShop.retrieveItems();
                break;
            case 3:
                myShop.modifyPrices();
                break;
            case 4:
                myShop.display();
                break;
            case 5:
                myShop.takeOrder();
                break;
            case 6:
                myShop.generateReceipt();
                break;
            case 7:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
