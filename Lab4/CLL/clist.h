//clist.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


struct node
{
    int data;	//some questions are a char * data;
    node * next;
};

class list
{
   public:
   	//These functions are already written
   	list();			//supplied
   	~list();		//supplied
   	void build();	//supplied
   	void display();	//supplied

	/* *****************YOUR TURN! ********************* */
	//Write your function prototype here:
	int display_all();
	int remove_all();
	int copy_all();
	int count_all();
	int add_all();


  private:
	/*function descriptions are at imp_code*/
	int display_all(node* rear);
	int display_all_exceptL(node* rear);

	int remove_all(node*& rear);
	int remove_last(node*& rear);
	int remove_iff_samerear(node*& rear, node* prev, int source);

	int copy_all(node* rear, node* prev, node*& dest);
	int copy_last(node* rear, node* prev, node*& dest);
	int copy_cll_notmult2(node* rear, node* prev, node*& dest);

	int count_even(node* rear);

	int add_all(node*& rear, int source);
	int add_only_dif(node*& rear,int checked, int source);
	int  check(node* rear, int source);
	int add_before_even(node*& rear, node* prev);
	node * rear;
};
