#include "clist.h"


int main()
{
    list object;
    object.build();		//builds a circular LL
    object.display();	//displays the list

	/* 
	object.display_all();
	object.count_all();
	object.add_all();

	 */

/************ for only copy *****************/
	/* 
	list objcopy;
	object.copy_all(objcopy);
	cout << "new rear -----------> :"; 
	objcopy.display();
	cout << "end of new rear----------------> ";
	*/
/************ for only copy *****************/


    //PLEASE PUT YOUR CODE HERE to call the function assigned
	object.remove_all();
    object.display(); //resulting list after your function call!
    
    return 0;
}
