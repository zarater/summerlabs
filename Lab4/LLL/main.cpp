#include "list.h"

int main()
{
    list object;
    object.build();    //builds a LLL
 	object.display();  //displays the LLL
	/*
	int match;
	cin>>match;
	 */
	/*
	object.copy();
	object.count(match);
	object.display_iff();
	 */

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    object.remove();

    object.display();  //displays the LLL again!
   
    
    return 0;
}
