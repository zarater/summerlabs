#include "arr.h"

	int func(int *i)
	{
	*	i = 90;
		return 1;
	}



int main()
{
    table object; 
    object.build(); //creates an array of LLL
    object.display(); //displays the array

    //PLEASE PUT YOUR CODE HERE to call the function assigned
	//object.display_all();
	object.test();
	char * test = new char[strlen("whatup")+1];
	strcpy(test, "whatup");
	cout << "test" << test[1]<< endl;
	cout << "test1" << test[1] << *(test +1)<< endl;
	int *i;
   *i= 1;
	
    func(i);

    object.display();  //display again afterward!
    
    
    return 0;
}
