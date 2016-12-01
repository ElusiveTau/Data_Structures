/*   	
	A linked list contains a series of 'link' objects that are connected
	through the use of pointers. Each link object's 'next_link' and 'prev_link' 
	attributes point to adjacent links. Given link A, A's prev_link attribute points
	to the link that is inserted after link A has been inserted (hereto referred to 
	as link A's predecessor). A's next_link attribute points to the link that is to 
	succeed as 'head' if and when link A is removed from the linked list. 

	If a given link has no predecessor, then it is the head link.
	If a given link has no successor, then it is the tail link. 
	
	A linked_list object's 'head' attribute refers to the first link in 
	the linked list. If head points to NULL, the list is empty.
	
	Unimplemented Features:
	1. Allows users to change the direction, sort-ness, and circularity of a
		prexisting LL object.
 */ 
 
 /* 
	Todo: 
		+ Implement LL_metadata 'ID' feature: allows a LL to be identified
		  by its ID
		  
	Questions:
		1. Is LL_metadata.size (the size of LL) kept in standard implementation? 
 */ 


#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdio.h>
#include <stdlib.h> 

typedef enum LL_dir
{
	SINGLE = 0, DOUBLE
} LL_dir; 

typedef enum LL_sort
{
	UNSORTED = 0, SORTED
} LL_sort; 

typedef enum LL_circ
{
	NONCIRC = 0, CIRC
} LL_circ; 

typedef struct LL_metadata
{
	//unsigned int ID; 			//Todo: Numerical ID for the linked-list
	int size; 					//Contains the number of elements in the LL
	LL_dir  dir_type  : 1; 		//SINGLE or DOUBLE
	LL_sort sort_type : 1; 		//UNSORTED or SORTED
	LL_circ circ_type : 1; 		//NONCIRC or CIRC 
} LL_metadata; 


typedef struct link
{
	struct link* next_link; //Refers to the link's successor
	struct link* prev_link; //Refers to the link's predecessor
	void* data; 
} link; 


typedef struct linked_list
{
	/* State variables for a particular link list */
	LL_metadata* meta_info; 
	link* head;		
	link* tail; 	
} linked_list;  


/* 
	STATUS: 
		Implemented but needs to address case in which malloc fails for LL_metadata

	DESCRIPTION: 
		Allocates memory for a single link_list object and initializes its members. 
		If allocation is successful, an additional memory allocation is invoked for 
		a LL_metadata object. The LL_metadata object is then initialized and assigned 
		to the newly created linked_list. 
	
	PARAMETERS:	
		None
	
	RETURN: 
		A pointer to the newly created linked_list object.
*/ 
linked_list* make_linkedlist(); 


/* =============== Singly-Linked List ============= */

/* 
	STATUS: UnImplemented

	DESCRIPTION: 
		Insert a data element at the head of the linked list passed to
		to insert_link. 
		
	PARAMETERS: 
		target		The linked list to which the element is inserted
		element 	The element to be inserted
		
	RETURN: 
		Returns the size of LL if successful. Otherwise the linked
		list is unmodified and the function returns -1.
*/ 
int insert(linked_list* target, void* element);


/* 
	STATUS:
		Mistake -- remove_link should remove an element by its data 

	DESCRIPTION: 
		Removes the head of the given linked_list and returns a pointer to 
		the data element. 
		
	PARAMETER: 
		target		The linked list whose head element should be removed
		
	RETURN: 
		A pointer to the data element of the removed link
*/ 
void* remove_link(linked_list* target); 



/* =============== Doubly-Linked List ============= */

/* Insert an element into the linked list at its tail */ 
int insert_tail(linked_list* target, void* element); 


/* Insert an element at some generic position */ 
int insert_at(void* element, int position); 


/* Remove and return an element at the head*/ 
void* remove_head();


/* Remove and return an element at the tail*/ 
void* remove_tail();


/* Deletes a linked_list object */ 
void delete_linkedlist(linked_list* target);


/* Dump everything. You must know the type */ 
void debug_print_linkedlist(linked_list* target); 


#endif