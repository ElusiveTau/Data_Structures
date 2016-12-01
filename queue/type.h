#ifndef TYPE_H
#define TYPE_H

#include <string.h>
#include <assert.h> 

typedef enum TYPE
{
	CHAR, INT, FLOAT, DOUBLE, STRING
}type; 

/* 
	DESCRIPTION: 
	
		Converts the type 'target' to its corresponding 
		null-terminated string. 
		
		e.g, If target = CHAR, the pass string will contain
			 "char", INT stores "int", etc... 
			 
		Note: It is the responsibility of the caller to make sure
			  the appropriate amount of space has been allocated for the 
			  string. (Must allocate an extra space for \0)
		  
	ARGS: 
		target 	A value of the type 'type' 
		dest	The destination to which the string is stored
*/
char* type2str(type target, char* dest)

#endif