#include <stdarg.h> //variable arguments
#include "type.h"   //Defintion of 'type' object

#define DEFAULT_ALLOC_SIZE 10

#ifndef QUEUE_H
#define QUEUE_H

/* 
	Allocates memory for some user-specified type. 
	User may choose to specify some number of elements
	to initally allocate space for.
 */ 
int init_queue(type target,...); 



#endif