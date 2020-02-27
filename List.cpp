#include "List.h"

List::List()
{
	top_index = 0;
}

void List::push(const Item& item)
{
	items[top_index] = item; // items[top_index++] = item;
	top_index++;
}

bool List::empty() const
{
	return top_index == 0;
}

bool List::full() const 
{
	return top_index  == MAX;
}

void List::visit_every_item(void(*pf)(Item&))
{
	for (int i = 0; i < top_index; i++) {
		pf(items[i]);
	}
}

void List::show_list()
{
	for (int i = 0; i < top_index; i++) {
		std::cout << i << ". - " << items[i] << std::endl;
	}
}
