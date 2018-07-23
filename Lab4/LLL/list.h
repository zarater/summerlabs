//list.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


struct node
{
    int data;   //some questions are a char * data;
    node * next;
};

class list
{
   public:
   //These functions are already written for you
     list();			//supplied
     ~list();			//supplied
     void build();     		//supplied
     void display();  		//supplied
	 int displayall(node* dest); //---displays node passed in
    
    /* *****************YOUR TURN! ******************************** */
    //Write your function prototype here:
	int copy();
	int count(int match);
	int display_iff();

   private:		//notice there is both a head and a tail!
	int copy(node* head, node*& dest);
	int copy(node* head, node* source, node*& dest);	

	int count(node* head, int match);
	int display_exceptL(node*head);//display except first and last
	int display_exceptF(node*head);//display except first and last

      node * head;
      node * tail;
};
