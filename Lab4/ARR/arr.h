//arr.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;  //some questions are char * data;
    node * next;
};

class table
{
    public:
    /* These functions are already written */
       table();		//supplied
       ~table();	//supplied
       void build();  	//supplied
       void display();  //supplied
	   int test();

    /* *****************YOUR TURN! ******************************** */
    //Write your function prototype here:
	int display_all();
    private:
	int display_all(node** head);
       node ** head; 	//dynamically allocated array
       int size; 	//the array size
};
