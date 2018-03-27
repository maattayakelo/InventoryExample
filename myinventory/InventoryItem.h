#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int ERROR1 = 330;

class InventoryItem
{
private: 
	string itemName;
	string itemID;
	double cost;
	int qty;
public:
	InventoryItem();
	~InventoryItem();
	int getInventoryItem();
	int addInventory(int num);
	int shipInventory(int num);

	friend ostream & operator<<(ostream &os, const InventoryItem &item);

};


