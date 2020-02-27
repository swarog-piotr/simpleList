#pragma once
#include <iostream>


typedef unsigned long Item;


class List
{
private:
	enum {MAX = 10};
	Item items[MAX];
	int top_index;
public:
	List();
	void push(const Item& item);
	bool empty() const;
	bool full() const;
	void visit_every_item(void (*pf)(Item&));
	void show_list();
};

