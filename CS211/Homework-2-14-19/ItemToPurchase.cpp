#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase(){
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}
void ItemToPurchase::SetName(string name){
    itemName = name;
}
string ItemToPurchase::GetName(){
    return itemName;
}

void ItemToPurchase::SetPrice(int itemPrice){
    this->itemPrice = itemPrice;
}
int ItemToPurchase::GetPrice(){
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity){
    this->itemQuantity = itemQuantity;
}
int ItemToPurchase::GetQuantity(){
    return itemQuantity;

}
