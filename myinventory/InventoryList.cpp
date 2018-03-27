#include "stdafx.h"
#include "InventoryList.h"
#include <iostream>
using namespace std;

InventoryList::InventoryList()
{
	listSize = 0;
}

int InventoryList::addInventoryItem()
{
	if (iList[listSize].getInventoryItem() == 0)
	{
		listSize++;
		return 0;
    }
	else
	{
		cout << "error occurred in addInventoryItem " << endl;
		return ERROR1;
	}
}

void InventoryList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << iList[i];
		cout << endl << endl;
	}
}