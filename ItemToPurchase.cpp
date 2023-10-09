#include <iostream>
#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase()
{
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(std::string itemName, std::string itemDescription, int itemPrice, int itemQuantity)
{
    this->itemName = itemName;
    this->itemDescription = itemDescription;
    this->itemPrice = itemPrice;
    this->itemQuantity = itemQuantity;
}

void ItemToPurchase::SetName(std::string itemName) { this->itemName = itemName; }
void ItemToPurchase::SetDescription(std::string itemDescription) { this->itemDescription = itemDescription; }
void ItemToPurchase::SetPrice(int itemPrice) { this->itemPrice = itemPrice; }
void ItemToPurchase::SetQuantity(int itemQuantity) { this->itemQuantity = itemQuantity; }

std::string ItemToPurchase::GetName() { return itemName; }
std::string ItemToPurchase::GetDescription() { return itemDescription; }
int ItemToPurchase::GetPrice() { return itemPrice; }
int ItemToPurchase::GetQuantity() { return itemQuantity; }

void ItemToPurchase::PrintItemCost()
{
    std::cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemPrice * itemQuantity << std::endl;
}

void ItemToPurchase::PrintItemDescription()
{
    std::cout << itemDescription << std::endl;
}
