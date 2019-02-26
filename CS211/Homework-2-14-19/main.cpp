//Take the last lab and turn the Struct into a Class
//HANNAH LEONARD
//@02903539
//Upload Assignment: Lab 2/15/19

#include<iostream>
#include<string>
#include "ItemToPurchase.h"
using namespace std;

int main()
{

   ItemToPurchase item1, item2;
   string itemName;
   int itemP;
   int itemQ;
   int Cost = 0;

   cout << "Item 1:" << endl;
   cout << "Enter the item name: " << endl;
   getline(cin, itemName);

   cout << "Enter the item price: " << endl;
   cin >> itemP;

   cout << "Enter the item quantity: " << endl;
   cin >> itemQ;

   item1.SetName(itemName);
   item1.SetPrice(itemP);
   item1.SetQuantity(itemQ);
   cin.ignore();

   cout << "Item 2:" << endl;
   cout << "Enter the item name: " << endl;
   getline(cin, itemName);

   cout << "Enter the item price: " << endl;
   cin >> itemP;
   
   cout << "Enter the item quantity: " << endl;
   cin >> itemQ;


   item2.SetName(itemName);

   item2.SetPrice(itemP);
   
   item2.SetQuantity(itemQ);


   cout << "TOTAL COST : " << endl;

   cout << item1.GetName() << " " << item1.GetQuantity() <<
    " @ $" << item1.GetPrice() << " = " << (item1.GetQuantity()*item1.GetPrice()) <<
     endl;
   
   cout << item2.GetName() << " " << item2.GetQuantity() <<
    " @ $" << item2.GetPrice() << " = " << (item2.GetQuantity()*item2.GetPrice()) <<
     endl;


   Cost = (item1.GetQuantity()*item1.GetPrice()) + (item2.GetQuantity()*item2.GetPrice());

   cout << "Total : $" << Cost << endl;

   return 0;
}
