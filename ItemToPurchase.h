#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>

class ItemToPurchase
{
private:
    std::string itemName;
    std::string itemDescription;
    int itemPrice;
    int itemQuantity;

public:
    ItemToPurchase();
    ItemToPurchase(std::string itemName, std::string itemDescription, int itemPrice, int itemQuantity);

    void SetName(std::string itemName);
    void SetDescription(std::string itemDescription);
    void SetPrice(int itemPrice);
    void SetQuantity(int itemQuantity);

    std::string GetName();
    std::string GetDescription();
    int GetPrice();
    int GetQuantity();

    void PrintItemCost();
    void PrintItemDescription();
};
#endif
