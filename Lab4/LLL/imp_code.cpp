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
	cout << head->data << endl;
	int num = display_exceptL(head->next);
	return num; //head->data;
}
int list :: display_exceptF(node* head)
{
	if(!head) return 0;
	cout << "head->data" << head->data << endl;
	int num = display_exceptF(head->next);
	cout << "head->dataafter" << head->data <<endl;//<< endl;
	cout << "num " << num << endl;
	return num; //head->data;
}



	/*
	if(num == 0 && !head->next)
	{
		num= num+head->data;
		return display_exceptFL(head->next, num);
	}	

	cout << head->data << endl;
	return display_exceptFL(head->next, num);
}

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
