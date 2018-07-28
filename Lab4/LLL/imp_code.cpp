#include "list.h"
//code
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
	if(head->next == NULL && tail->data == source->data)
	{
		dest = head->next;
		return 0;
	}
	dest = new node;
	dest->data = head->data;
	dest = head;
	return copy(head->next,source, dest->next);
}
int list :: count(node* head, int match)
{
	if(!head) return 0;
	if(head->data == match) return count(head->next, match)+1;

	return count(head->next, match); 
}



int list :: display_exceptL(node* head)
{
	if(!head) return 0;
	if(!head->next) return head->data;
	int num = display_exceptL(head->next);
	return num;

}
int list :: display_exceptF(node* head)
{
	if(!head) return 0;
	if(head->next!=NULL)
	{
		if(head->next->next != NULL)
		{
		cout << head->next->data; 
		if(head->next->next->next != NULL)
	   cout << "->";
	   else 
		   cout << " " << endl;
		}

	}
	display_exceptF(head->next);
	int num = head->data;
	return num; //head->data;
}
int list :: remove_all(node*& head)
{
	if(!head) return 0;
	delete head;
	remove_all(head->next);
	head= NULL;
	return 1;

	/*#2
	if(!head) return 0;
	remove_all(head->next);
	node* temp = new node;
	temp = head;
	delete head;
	head = temp;
	head = NULL;
	return 1;
	*/
}
int list :: remove_except_lasttwo(node*& head)
{
	if(!head) return 0;
	if(!head) return 0;
	remove_all(head->next);
	node* temp = new node;
	temp = head;
	delete head;
	head = temp;
	head = NULL;
	return 1;
	if(!head->next->next)
	{
		cout << "head data" <<  head->data << endl;
		cout << "head next data" << head->next->data << endl;
		return 0;

	}
		if(head->next == NULL)
		{
			cout << "head data" <<  head->data << endl;
			return 0;
		}

	return 1;
}


	/*
	 *
	   if(head->next->next)

int list :: count_all(node* head)
{
	if(!head) return 0;

	return count_all(head->next)+1;
}

	*/
int list::displayall(node* dest)
{
	if(!dest) return 0;
	cout <<dest->data << endl;
	displayall(dest->next);
	//cout <<dest->data << endl;
	return 1;
}
