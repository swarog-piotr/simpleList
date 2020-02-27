// simple_list.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "List.h"


template<typename T>
void increment(T& item);


void show(Item& item);

int main()
{
	List mylist;
	mylist.push(14);
	mylist.push(55);

	Item myItem = 14;
	mylist.push(myItem);

	//mylist.show_list();

	mylist.visit_every_item(show);

	system("pause");
}



template<typename T>
void increment(T& item)
{
	item++;
}


void show(Item& item)
{
	std::cout << item << std::endl;
}
