#include "dlist.h"


int main()
{
    list object;
    object.build();
    object.display();
	/*
	list obj;
	object.copy_all(obj);
	obj.display();
	object.remove_all();
	 
	 */

    //PLEASE PUT YOUR CODE HERE to call the function assigned
	object.add_all();
    object.display();
    
    return 0;
}
