#include <stdio.h> 
#include <string.h> 
#include "linkedlist.h" 
#include <time.h>
#include <stdlib.h> //srand(), rand()


int main()
{
	//Set up random number generator
	time_t t; 
	srand((unsigned) time(&t)); 
	
	//Generate a series of elements
	int i, num_randoms = 10;
	int elements[10];
	for(i=0; i< num_randoms; i++)
		elements[i] = rand() % 100; 

	//Create a linked list and push elements 
	linked_list* newll = make_linkedlist(); 
	if(newll != NULL)
	{
		int i; 
		for(i=0; i<num_randoms; i++)
			printf("Inserting element #%d (%d)\n", insert_link(newll, &elements[i]), elements[i]);
	}
	else 
		printf("Something went wrong.\n"); 
	
	//Print out the contents of the linked list
	debug_print_linkedlist(newll); 
	
	
	system("PAUSE");
	return 0; 
}