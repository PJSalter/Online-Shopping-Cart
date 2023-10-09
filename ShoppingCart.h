#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"

class ShoppingCart
{
private:
    std::string customerName;
    std::string currentDate;
    std::vector<ItemToPurchase> cartItems;

public:
    ShoppingCart();
    ShoppingCart(std::string customerName, std::string currentDate);

    std::string GetCustomerName();
    std::string GetDate();

    void AddItem(ItemToPurchase itemToAdd);
    void RemoveItem(std::string itemToRemove);
    void ModifyItem(ItemToPurchase itemToModify);

    int GetNumItemsInCart();
    int GetCostOfCart();

    void PrintTotal();
    void PrintDescriptions();
    // void PrintCart() const;
};
#endif
