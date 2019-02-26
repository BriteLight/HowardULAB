#ifndef ITEMTOPURCHASE_H_INCLUDED
#define ITEMTOPURCHASE_H_INCLUDED

#include<string>

#include <iostream>

using namespace std;
class ItemToPurchase
{
public:
  ItemToPurchase();

  void SetName(string ItemName);
  string GetName();

  void SetPrice(int itemPrice);
  int GetPrice();

  void SetQuantity(int itemQuantity);
  int GetQuantity();


private:
   string itemName;
   int itemPrice;
   int itemQuantity;
};

#endif
