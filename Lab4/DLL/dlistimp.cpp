#include "dlist.h"
int 
list :: copy_all(node*& head, node*& dest)
{
	if(!head) return 0;
	if(!dest)
	{
		dest = new node;
		dest->data = head->data;
		dest->next = NULL;
		dest->previous = NULL;
		cout << dest->data << "dest init" << endl;
	}
	node* temp = new node;
	temp->data = head->data;
	temp->next = dest->next;
	
	dest->next = temp;
	temp->previous = dest;
	dest = temp;
		copy_all(head->next, dest);
	

	return 1;
}


int list :: remove_if_larger_thenfirst(node*& head, node*& prev, int source)
{
	if(!head) return 0;
	int data = head->data;
	if(data == source)
	{	
		if(head->next!=NULL)
		{
		node* temp = head;
		head->next->previous = prev;
		prev->next = head->next;
	//	head->previous = prev;
			delete temp;
			temp = NULL;
		}
		else 
		{
			prev->next = NULL;
			//head->previous = NULL;
			delete head;
			head = NULL;
			return 1;
		}
	}
			
remove_if_larger_thenfirst(head->next,head, source);
return 1;
}
/*
		cout << "head data " << head->data << endl;
		cout << "head next prev data " << head->next->previous->data << endl;
		cout << "head next data " << head->next->data << endl;
		cout << "prev  data " << prev->data << endl;
		cout << "prev next data " << prev->next->data << endl<<endl;
		cout << "else statement" << endl;
*/
int list :: add_duplicat(node*& head, int source)
{
	if(!head) return 0;
	if(head->next == NULL&& source == head->data)
	{
		node* temp  = new node;
		temp->data = head->data;

		temp->next = head->next;
		head->next = temp;
		temp->previous = head;

		tail = temp;
		return 0;
	}
	else if(source == head->data)
	{
		node* temp = new node;
		temp->data = head->data;
	
		node* temp2= head->next;
		temp->next = temp2;
		temp2->previous = temp;
		head->next = temp;
		temp->previous = head;
	}

	add_duplicat(head->next->next, source);
	return 1;
}






/*
		node* temp = new node;
		temp->data = head->data;


		head->next->previous = temp;
		temp->next = head->next;
		head->next = temp;
		temp->previous = head;
		head = temp;

cout << "between " << endl;
		cout << "head " << head << endl;
		cout << "head next  " << head->next<< endl;
		cout << "head next prev " << head->next->previous << endl;
		cout << "temp " << temp << endl;
		cout << "temp next " << temp->next << endl;
		cout << " temp previous " << temp->previous << endl;
cout << "between " << endl;
*/
//









