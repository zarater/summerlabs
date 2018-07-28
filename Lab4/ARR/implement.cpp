#include "arr.h"

int table :: display_all()
{
	node* temp = new node;
	temp-> data = 1000;
	table *array = new table;
		array->head = new node*[3];


	for(int i=0; i<= 3; ++i)
		array->head[i]= new node;


	for(int i=0; i<= 3; ++i)
	{
		array->head[i]->data =  temp->data;
		//array.head[i] = temp;
		cout << "array! "<< array->head[i]->data << endl;// (*temp)->data;
	}
return 1;
}
int table :: test()
{
	node* temp = new node;
	temp-> data = 1000;

	table array;
	array.head = new node*[3];
	
	for(int i=0; i< 3; ++i)
	{
			array.head[i]=new node;
		array.head[i]->data = temp -> data;
		cout << "array! "<< array.head[i]->data << endl;// (*temp)->data;
	}



	return 1;
}



	

int table :: display_all(node** head)
{
	if(!head) return 0;
	return 1;
}
