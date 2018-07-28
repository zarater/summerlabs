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
	int sum = display_exceptL(head)+display_exceptF(head);
	cout << "sum" << sum << endl;
	return sum;
}
int list :: remove()
{
	int user = 0;
	int n =0 ;

	cout << "which" << endl;
	cout << "delete all 1, delete except last two 2, delete middle 3, delete front4 delete last 3" << endl;
	cin >> user;
	
	if(user==1) n = remove_all(head);
	if(user==2) n = remove_except_lasttwo(head);
	cout << "n" << n << endl;
	return 1;
}
	/*
	 * a verson of display.. could not display first but last and save last not save first
	if(!head) return 0;
	cout << head->data << endl;
	if(!head->next) return head->data; 
	if(head->next && head->next->data+head->data !=head->data)
	int num = display_exceptL(head->next);
	cout << "head->dataafter" << head->data <<endl;//<< endl;
	int num2 = head->data;
	cout << "num " << num<< "num2 " << num2 << endl;
	return num; //head->data;
	*/
	/*
	 * stuff that helps solve... put inside conditionals or wherever
		cout << "source data " << source->data << endl;
		cout << "tail" << tail->data << endl;
		cout << "head data" << head->data <<endl;
	cout << "head data all" << head->data << endl;
		cout << "head next data " << head->next->data << endl;
	*/
