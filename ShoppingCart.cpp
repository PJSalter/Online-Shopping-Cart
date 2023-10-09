#include <iostream>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include <string>
#include <vector>

// void ShoppingCart::PrintCart() const {
//     if (numItems == 0) {
//        cout << "SHOPPING CART IS EMPTY" << endl;
//        return;
//     }

//     for (int i = 0; i < numItems; ++i) {
//        cout << items[i].GetName() << " " << items[i].GetQuantity() << " @ $" << items[i].GetPrice()
//              << " = $" << items[i].GetPrice() * items[i].GetQuantity() << endl;
//     }
// }

ShoppingCart::ShoppingCart()
{
    customerName = "none";
    currentDate = "January 1, 2016";
    // cartItems;
}

ShoppingCart::ShoppingCart(std::string customerName, std::string currentDate)
{
    this->customerName = customerName;
    this->currentDate = currentDate;
    // cartItems;
}

std::string ShoppingCart::GetCustomerName() { return customerName; }
std::string ShoppingCart::GetDate() { return currentDate; }

int ShoppingCart::GetNumItemsInCart()
{
    int total = 0;
    for (unsigned int i = 0; i < cartItems.size(); i++)
    {
        total = total + (cartItems.at(i).GetQuantity());
    }
    return total;
}

int ShoppingCart::GetCostOfCart()
{
    int total = 0;
    for (unsigned int i = 0; i < cartItems.size(); i++)
    {
        total = total + (cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity());
    }
    return total;
}

void ShoppingCart::AddItem(ItemToPurchase itemToAdd)
{
    cartItems.push_back(itemToAdd);
}
void ShoppingCart::RemoveItem(std::string itemToRemove)
{
    bool found = false;
    for (unsigned int i = 0; i < cartItems.size(); i++)
    {
        if (cartItems.at(i).GetName() == itemToRemove)
        {
            cartItems.erase(cartItems.begin() + i);
            found = true;
            break;
        } // if
    }     // for

    if (found == false)
    {
        std::cout << "Item not found in cart. Nothing removed.\n";
    } // if

} // func

void ShoppingCart::ModifyItem(ItemToPurchase itemToModify)
{
    for (unsigned int i = 0; i < cartItems.size(); i++)
    {
        if (cartItems.at(i).GetName() == itemToModify.GetName())
        {
            int newQuantity;
            std::cout << "Enter the new quantity:";
            std::cin >> newQuantity;

            // Update the quantity of the item
            cartItems.at(i).SetQuantity(newQuantity);
            return; // Exit the function after modifying the item
        }
    }
    std::cout << "Item not found in cart. Nothing modified.\n";
}

void ShoppingCart::PrintTotal()
{
    std::cout << customerName << "'s Shopping Cart - " << currentDate << "\n";
    std::cout << "Number of Items: " << GetNumItemsInCart() << "\n";
    std::cout << "\n";

    for (unsigned int i = 0; i < cartItems.size(); i++)
    {
        std::cout << cartItems.at(i).GetName()
                  << " "
                  << cartItems.at(i).GetQuantity()
                  << " @ $"
                  << cartItems.at(i).GetPrice()
                  << " = $"
                  << cartItems.at(i).GetQuantity() * cartItems.at(i).GetPrice()
                  << std::endl;
    }
    // std::cout << "\n";

    if (cartItems.size() == 0)
    {
        std::cout << "SHOPPING CART IS EMPTY\n";
    }
    std::cout << "\n";
    std::cout << "Total: $" << GetCostOfCart() << "\n\n";
}
void ShoppingCart::PrintDescriptions()
{

    std::cout << customerName << "'s Shopping Cart - " << currentDate << "\n\n";

    std::cout << "Item Descriptions\n";

    for (unsigned int i = 0; i < cartItems.size(); i++)
    {
        std::cout << cartItems.at(i).GetName()
                  << ": "
                  << cartItems.at(i).GetDescription()
                  << "\n";
    }
    std::cout << std::endl;
}
