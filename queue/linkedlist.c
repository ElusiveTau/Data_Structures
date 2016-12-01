#include "linkedlist.h"
 
#define DEFAULT_LL_SIZE   0
 
linked_list* make_linkedlist(LL_dir d, LL_sort s, LL_circ c) 
{
	/* Allocate memory for a link_list object */  
	linked_list* newLL = (linked_list*)malloc(sizeof(linked_list)); 

	/* Was malloc() successful? */ 
	if(newLL == NULL)
	{
		//too: stderr: failed to allocate space for LL
		return NULL; 
	}
	else
	{
		/* Initialize metadata object */ 
		LL_metadata* md_ptr = (LL_metadata*)malloc(sizeof(LL_metadata*)); 
		md_ptr->size      = DEFAULT_LL_SIZE; 
		md_ptr->dir_type  = d;
		md_ptr->sort_type = s; 
		md_ptr->circ_type = c;
		newLL->meta_info  = md_ptr; 	
		
		/* Initialize 'head' and 'tail' */ 
		newLL->head = NULL; 
		newLL->tail = NULL; 
		
		return newLL; 
	}
	
	return NULL; //Failed to create a linked-list
}


int insert(linked_list* target, void* element) 
{
	/* Check the passed linked list & element for NULL reference */ 
	if(target == NULL || element == NULL)
	{
		//Todo: Stderr: Tried to pass a null-reference to a link-list or element
		return -1; 
	}
	
	/* Allocate space, initialize data, and insert new link object*/ 
	link* new_link = (link*)malloc(sizeof(link)); 	//Make new_link
	if(new_link == NULL)
	{
		//Todo: stderr -- failed to alloc space for new link
		return -1; 
	}
	else
	{
		switch(target->
		/*
		if(target->head == NULL) //List is empty
		{
			new_link->prev_link = NULL; 		//New link is a head-link
			new_link->next_link = NULL; 		//New link is also a tail-link
			target->head = new_link; 			
			target->tail = new_link;		
		}
		else //List not empty
		{
			//Designate new_link as current head's predecessor.
			target->head->prev_link = new_link; 
			
			//Designate current head as new link's successor
			new_link->next_link = target->head; 
			new_link->prev_link = NULL; 		
			
			//Designate a new head
			target->head = new_link; 
		}
		new_link->data = element; 	    //Associate data with the link
		(target->meta_info->size)++; 	//Linkedlist size++
		*/
		
		
		return target->meta_info->size; //Success!
	}
	
	return -1; //Failed to insert 
}


void* remove_link(linked_list* target)
{
	if(target == NULL)
	{
		//Todo: stderr -- Null reference to target
		return NULL; 
	}
	else
	{
		link* marked_link = target->head; //Save the address of the current head
		void* data = target->head->data;  //Save pointer to data to be returned
		
		target->head = target->head->next_link; //Assign a new head 
		(target->meta_info.size)--;				
		
		//"Delete" current head 
		//Shouldn't free the pointer to data -- that is to be returned
		//Shouldn't free successor -- that becomes the new head
		//Shouldn't free predecessor -- that's NULL, by definition
		free(marked_link); 
		return data; 
	}
	
	return NULL; 
}


int insert_tail(linked_list* target, void* element) 
{
	
}


void delete_linked_list(linked_list* targ) 
{
	
}


LL_sort sort_linked_list(linked_list* target, int (*isGreaterThan)(void*, void*))
{
	
}

int find_link(linked_list* target, void* element, ) 
{
	link* it = target->head; 
	//while(it.
}

void debug_print_linkedlist(linked_list* targ)
{
	link* it = targ->head; 
	
	int i = 0; 
	while(it != NULL)
	{
		printf("[#%d:%d:%] ", i, *((int*)it->data)); 
		it = (*it).next_link; 
		i++;
	}
}

