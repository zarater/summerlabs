#include "list.h"

//wrapper
int list :: copy()
{
	int user;
	node* source = new node;
	source->data = head->data;
	node* dest;
	cout << "which" << endl;
	cout << "copy all 1, copy not last if last is first 2" << endl;
	cin >> user;
	if(user==1) copy(head, dest);//all to a new list
	if(user==2) copy(head, source, dest);
	displayall(dest);
	return 1;
}
