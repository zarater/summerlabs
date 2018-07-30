#include "clist.h"


	/*
	 * ----> DISPLAY FUNCTION
	*/


int list :: display_all_exceptL(node* rear)
{
   if(!rear) return 0;
	if(rear->next->next == this->rear)
	{
		node* temp = rear->next;
		rear->next = rear->next->next;
		delete temp;
		temp = NULL;
		return 1;
	}
	cout << "rear" << rear->data << endl;
	int n = display_all(rear->next)+1;   
	return n;
}

int list :: display_all(node* rear)
{
   if(!rear) { cout << "nothing in list!" << endl; return 0;}
	cout << rear->data; 
	if(rear->next!=NULL)
		cout << " -> " ;
	else
		cout << " " << endl;
	if(rear->next == this->rear) return 1;
	int n = display_all(rear->next)+1;   
	return n;
} 

	/*
	 * REMOVE FUNCTION
	*/
int list :: remove_all(node*& rear)
{
   if(!rear) return 0;
	if(rear->next == this->rear) return 1;
		node* temp = rear;
		delete rear;
		rear = temp;
	int n = remove_all(rear->next)+1;   
		rear = NULL;

	return n;
} 

int list :: remove_last(node*& rear)
{
   if(!rear) return 0;
   //checks if rear next is this rear. checks the constructor default settings for what rear is..
	if(rear->next == this->rear) 
	{
		cout<< "this rear next" << this->rear->next->data << "rear " << rear->data << endl;
		node* temp = rear->next;
		this->rear = this->rear->next;
		rear->next = this->rear;
		delete temp;
		temp = NULL;
		
		return 1;//plus one to n. n isnt in scope of recursion
	}
	int n = remove_last(rear->next)+1;   
	return n;
}

int list :: remove_iff_samerear(node*& rear, node* prev, int source)//remove if any data are the rear pointer
{
	if(!rear) return 0;
	if(rear == this->rear) return 0;
	if(rear->data == source)
	{
		node* temp = rear;
		prev->next = rear->next;
		delete temp;
	}
	remove_iff_samerear(rear->next, rear, source);
	return 1;
}
	/*
	 *-----> COPY FUNCTION
	*/


int list :: copy_all(node* rear, node* prev, node*& dest)
{
	//I'm allowed to do this because rear is actuall rear-> next and prev is rear
	if(!rear) return 0;
	dest = new node; 
	dest = rear;
	if(rear == this->rear) return 0;
	int n =copy_all(rear->next, rear, rear->next)+1;
	return n;

}
	/*
	*/
int list :: copy_last(node* rear, node* prev, node*& dest)//copies all except last
{
	if(!rear) return 0;
	dest = new node;
	dest->data = rear->data;
	dest = rear;
	if(rear->next == this->rear)
	{
		//dest next is null alread per deconstructor given
		return 0;
	}
	int n =	copy_last(rear->next, rear, dest->next)+1;
	return n;
}


int list :: copy_cll_notmult2(node* rear, node* prev, node*& dest)
{
	if(!rear) return 0;
	if(rear->data%2==0)
	{
		if(rear->next != this->rear)
		{
	//cout << "here" << endl;
		   	rear = rear->next;
		}
	}
	dest = new node; 
	dest = rear;
	if(rear == this->rear) return 0;
	int n =copy_cll_notmult2(rear->next, rear, dest->next)+1;
	return n;
}

	/*
	 *-----> count FUNCTION
	*/
int list :: count_even(node* rear)
{
	if(!rear) return 0;
	if(rear->next == this->rear) return 0;
	int n = count_even(rear->next);
	if(rear->data%2 == 0) return ++n;
	return n;
}

	/*
	 *-----> add FUNCTION
	*/
int list :: add_all(node*& rear,int source) //add to end but only if data is
{
	if(!rear) return 0;
	if(rear->next == this->rear)
	{
		node* temp= new node;
		temp->data = source;
		temp->next = rear->next;
		rear->next = temp;
		return 0;
	}
	int n = add_all(rear->next, source)+1;
	return n;
}
int list :: add_only_dif(node*& rear, int checked, int source) //add to end but only if data is diff
{
	if(!rear) return 0;
		//cout << "source" << source << "rear data" << rear->data << endl;
		if(rear->next == this->rear)
		{
	if(checked == 0)//nothing in list that matches
	{
			//cout << "here" << endl;
		node* temp= new node;
		temp->data = source;
		temp->next = rear->next;
		rear->next = temp;
		return 0;
		}
	}
	if(rear->next == this->rear) return 0;
		int n = add_only_dif(rear->next,checked, source)+1;
	return n;
}

//	TODO	add using this method..
/*********************************************************/
int list :: add_before_even(node*&rear, node*prev)//add before node with even data
{
	if(!rear) return 0;
	/*
	*
	*/
		cout << prev->data <<"  .  " << rear->data << endl;
	if(rear->data%2 == 0)
	{
		cout << prev->data <<"    " << rear->data << endl;
		cout << prev->next->next->data << endl;
		node* temp = new node;
		temp->data = 10000;
		temp->next = prev->next;
		prev->next = temp;
	}
	if(rear == this->rear) return 0;
		return add_before_even(rear->next, rear)+1;

}
/*********************************************************/
