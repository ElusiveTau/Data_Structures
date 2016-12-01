#include "type.h"

char* type2str(type t, char* dest)
{
	switch(t)
	{
		case CHAR: 
			dest = strcpy(dest, "char\0"); 
			break; 
		case INT: 
			dest = strcpy(dest, "int\0"); 
			break; 
		case FLOAT: 
			dest = strcpy(dest, "float\0"); 		
			break;
		case DOUBLE: 
			dest = strcpy(dest, "double\0"); 		
			break;
		case STRING:  
			dest = strcpy(dest, "string\0"); 		
			break;
		default: 
			//Stderr-out err message. Don't populate dest.
			return NULL; 
	}
	
	return dest; 
}