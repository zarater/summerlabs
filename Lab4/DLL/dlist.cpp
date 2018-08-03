#include "dlist.h"

int
list :: copy_all(list& obj)
{
	copy_all(head, obj.head);
	return 1;
}

int
list :: remove_all()
{
	int source = head->data;
	remove_if_larger_thenfirst(head->next, head, source);
	return 1;
}
int 
list :: add_all()
{
	int source = 2;
	add_duplicat(head, source);
	return 1;
}
