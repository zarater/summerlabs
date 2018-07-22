#include "list.h"

int list :: copy(node* head, node*& dest)
{
	if(!head) return 0;
	copy(head->next, dest);
	dest = new node;
	dest->data = head->data;
	dest=head;
	return 1;
}

int list :: copy(node* head, node* source, node*& dest)
{
	if(!head) return 0;
	if((head->next->next == NULL) && (tail->data == source->data))
	{
		cout << "tail" << tail->data << endl;
		cout << "head data" << head->next->data<<endl;
		dest->data = head->data;
		dest->next = head->next->next;
		dest = head;
	//	return 1;
	}
	dest = new node;
	dest->data = head->data;
	dest=head->next;
	copy(head->next,source, dest);
	return 1;
}
	/*
	if(head->next->next==NULL)
	{
		cout << "head data" << head->data <<endl;
		cout << "head next data " << head->next->data << endl;
	}
	*/

	/*
	*/

int list::displayall(node* dest)
{
	if(!dest) return 0;
	cout <<dest->data << endl;
	displayall(dest->next);
	cout <<dest->data << endl;
	return 1;
}
