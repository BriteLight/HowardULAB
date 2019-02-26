#include<iostream>
#include<string>
#include"ItemToPurchase.h"
using namespace std;


int main()
{
	string selection;
	int Qty;
	int Mkt;
	ItemToPurchase itemA;
	ItemToPurchase itemB;
	cout << "Enter the item name:  ";
	cin>>selection;
	itemA.SetName(selection);
	cout << endl;
	cout << "Enter the item price:  ";
	cin >> Mkt;
	itemA.SetPrice(Mkt);
}
