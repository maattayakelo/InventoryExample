// myinventory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "InventoryItem.h"
#include "InventoryList.h"
using namespace std;


int main()
{
	InventoryList mylist;
	mylist.addInventoryItem();
	mylist.addInventoryItem();
	mylist.displayList();
    return 0;

}

