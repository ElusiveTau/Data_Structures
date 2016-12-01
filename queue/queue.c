#include "queue.h"

int init_queue(int num_args, type target, ...)
{
	/* initialize valist for some number of arguments */
	va_list valist; 
	va_start(valist, num_args); 
	
	size = 0; 
	
	if(num_args == 1)
	{
		switch(target) 
		{
			case CHAR: 
			{
				
				break;
			}
			case INT:
			{
				
				break;
			}
			case FLOAT: 
			{
				
				break;
			}
			case DOUBLE: 
			{
			
				break;
			}
			case STRING: 
			{
				
				break;
			}
			default: 
				//Stderr - unsupported type
		}
	} 
	else if (num_args == 2)
	{ //User specifies type and pre-alloc size
		
	}
	else
	{
		size = -1; 
		//todo: stderr -- unsupported number of args specified
	}
	
	/* clean memory reserved for valist */
	va_end(valist); 
	
	return 1; //Successful
}