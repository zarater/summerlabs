#include "clist.h"
//wrapper
//

int list :: display_all()
{
	int n = 0;
	int user = 0;
	cout << "which?" << endl;
	cin>> user;
	 if(user==1) n=display_all(rear);
	 if(user==2) n = display_all_exceptL(rear);
	 cout << "n" << n << endl;
	return n;
}
int list :: remove_all()
{
	int n = 0;
	int user = 0;
	int source = rear->data;
	cout << "which?" << endl;
	cin>> user;
	 if(user==1) n = remove_all(rear);
	 if(user==2) n = remove_last(rear);
	 if(user==3) n = remove_iff_samerear(rear->next, rear, source);
	 cout << "n" << n << endl;
	return n;
}

int list :: copy_all(list& obj)//Passes display in main
{
	node* dest = obj.rear;//----> this gets intialized bu tcan look like copy_cll_n..(..)
	int n = 0;
	int user = 0;
	cout << "which?" << endl;
	cin>> user;
	 if(user==1) n = copy_all(rear->next, dest);// uses dest = obj.rear. UNCOMMENT below
	 if(user==2) n = copy_last(rear->next, rear, obj.rear);//copies except last
	 if(user==3) n = copy_cll_notmult2(rear->next, obj.rear);
	 cout << "n" << n << endl;
	 //obj.rear = dest;//---> UNCOMMENT to display copy_all(...dest)
	return n;
}

int list :: count_all()
{
	int n = 0;
	int user = 0;
	cout << "which" << endl;
	cin >> user;
	if(user== 1) n = count_even(rear);
	cout << "n" << n << endl;
	return n;
}
int list :: check(node* rear, int source)
{
	if(!rear) return 0;
	if(rear->next == this->rear) return 0;
	int checkn = check(rear->next, source);
	if(source == rear->data)
	{ 
		checkn += 1;
	}
	return checkn;
}


/*********************************************************/
int list :: add_all()
{
	int n = 0;
	int source = 1002;
	int user = 0;
	int checked = check(rear, source);
	cout << checked << "checked" << endl;
	cout << "which" << endl;
	cin >> user;
	if(user== 1) n = add_all(rear, source);
	if(user==2)	n = add_only_dif(rear,checked, source);
	if(user==3)	n = add_before_even(rear->next,rear);//tail recursion
	if(user==4)	n = add_before_even2(rear->next, rear);//head recursion
	cout << "n" << n << endl;
	return n;
}
/*********************************************************/


