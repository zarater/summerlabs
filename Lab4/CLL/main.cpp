#include "clist.h"


int main()
{
    list object;
    object.build();		//builds a circular LL
    object.display();	//displays the list

	/* 
	object.display_all();
	object.remove_all();
	object.count_all();
	object.add_all();

	 */

    //PLEASE PUT YOUR CODE HERE to call the function assigned
	object.copy_all();

    object.display(); //resulting list after your function call!
    
    return 0;
}
