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
	 int displayall(node* dest);
    
    /* *****************YOUR TURN! ******************************** */
    //Write your function prototype here:
	int copy();
	int copy(node* head, node*& dest);
	int copy(node* head, node* source, node*& dest);	

   private:		//notice there is both a head and a tail!
      node * head;
      node * tail;
};
