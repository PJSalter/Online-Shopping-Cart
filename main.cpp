#include <iostream>
#include <iomanip>
#include <limits> // Add this include for cin.ignore
using namespace std;
#include "ShoppingCart.h"

// Helper function to clear the input buffer
// void ClearInputBuffer() {
//     cin.clear();
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
// }

void PrintMenu()
{
    cout << "MENU\n"
         << "a - Add item to cart\n"
         << "d - Remove item from cart\n"
         << "c - Change item quantity\n"
         << "i - Output items' descriptions\n"
         << "o - Output shopping cart\n"
         << "q - Quit\n\n";
}

void ExecuteMenu(char option, ShoppingCart &theCart)
{
    switch (option)
    {
    case 'a':
    {
        string itemName;
        string itemDescription;
        int itemPrice;
        int itemQuantity;

        cout << "ADD ITEM TO CART" << endl;
        getline(cin, itemName);
        cout << "Enter the item name:";
        getline(cin, itemName);
        cout << endl;

        cout << "Enter the item description:";
        getline(cin, itemDescription);
        cout << endl;

        cout << "Enter the item price:";
        cin >> itemPrice;
        cout << endl;

        cout << "Enter the item quantity:";
        cin >> itemQuantity;
        cout << endl
             << endl;

        ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);

        theCart.AddItem(newItem);
    }
    break;

    case 'd':
    {
        string item;
        cout << "REMOVE ITEM FROM CART" << endl;
        getline(cin, item);
        cout << "Enter name of item to remove:";
        getline(cin, item);
        cout << endl;

        theCart.RemoveItem(item);
        cout << endl;
    }
    break;

    case 'c':
    {
        std::string itemName;
        std::cout << "CHANGE ITEM QUANTITY" << std::endl;
        std::cin.ignore(); // Ignore the remaining newline character in the input buffer

        std::cout << "Enter name of item to modify:";
        getline(cin, itemName);
        std::cout << std::endl;

        ItemToPurchase itemToModify(itemName, "", 0, 0);
        theCart.ModifyItem(itemToModify);
        std::cout << std::endl;
    }
    break;

    case 'i':
    {
        cout << "OUTPUT ITEMS' DESCRIPTIONS\n";
        theCart.PrintDescriptions();
    }
    break;

    case 'o':
    {
        cout << "OUTPUT SHOPPING CART\n";
        theCart.PrintTotal();
    }
    break;

    case 'q':
    {
    }
    break;

    default:
        break;
    }
}

int main()
{
    char option;
    string name;
    string date;

    cout << "Enter customer's name:";
    getline(cin, name);
    // std::cin.ignore();
    cout << endl;
    cout << "Enter today's date:";
    getline(cin, date);
    // std::cin.ignore();
    cout << endl
         << endl;

    ShoppingCart cart(name, date);
    cout << "Customer name: " << cart.GetCustomerName() << endl;
    cout << "Today's date: " << cart.GetDate() << endl;
    cout << endl;

    do
    {
        PrintMenu();
        do
        {
            cout << "Choose an option:";
            cin >> option;
            cout << endl;
        } while ((option != 'a') && (option != 'd') && (option != 'c') && (option != 'i') && (option != 'o') && (option != 'q'));
        ExecuteMenu(option, cart);
    } while (option != 'q');

    return 0;
}
