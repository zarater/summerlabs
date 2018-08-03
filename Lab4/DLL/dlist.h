//doubly linked list
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;


struct node
{
    int data;		//some questions use a char * data;
    node * previous;
    node * next;
};

class list
{
    public:
        //These functions are already written
        list();         //supplied
        ~list();        //supplied
        void build();   //supplied
        void display(); //supplied
/* *****************	YOUR TURN! ***************************** */
        
	int copy_all(list& obj);
	int remove_all();
	int add_all();


     
     private:
	int add_duplicat(node*& head, int source);
	int copy_all(node*& head, node*& dest);
	int remove_if_larger_thenfirst(node*&head, node*& prev, int source);

         node * head;   //notice there is both a head
         node * tail;   //and a tail, common for DLL
};
