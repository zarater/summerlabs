#include "list.h"

//wrapper
int list :: copy()
{
	int user;
	node* dest;
	node* source = new node;
	source->data = head->data;

	cout << "which" << endl;
	cout << "copy all 1, copy not last if last is first 2" << endl;
	cin >> user;
	
	if(user==1) copy(head, dest);//all to a new list
	if(user==2) copy(head, source, dest);

	displayall(dest);
	/*
	 * destroy(dest); need to destroy leak
	 * destroy(source);
	 */
	return 1;
}


int list :: count(int match)
{
	if(!head) return 0;
	int counted = count(head, match);
	cout << counted << endl;//displays unless...
	return counted;
}

int list :: display_iff()
{
	//int total = count_all();
	int sum = display_exceptL(head);
	cout << "sum" << sum << endl;
	return sum;
}
	/*
	 * stuff that helps solve... put inside conditionals or wherever
		cout << "source data " << source->data << endl;
		cout << "tail" << tail->data << endl;
		cout << "head data" << head->data <<endl;
	cout << "head data all" << head->data << endl;
		cout << "head next data " << head->next->data << endl;
	*/
