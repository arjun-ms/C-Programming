#include <stdio.h>
#include <stdlib.h>

// create a node
struct node{
	int data;
	struct node *next;
}

// Insert at beginning
void insertAtBeg(struct node **headref, int newdata){

	// Allocate memory to a node
	struct node *newnode= (struct *node)malloc(sizeof(struct node));
	
	// insert the data
	newnode->data = newdata;
	newnode->next = (*headref);
	
	// move head to newnode
	*headref =  newnode;
}


// Insert a node after a node
void insertAfter(struct node *prevnode, int newdata){

	if(prevnode == NULL){
		printf("The given prev node cannot be null")
		return;
	}
	
	struct node *newnode = (struct *node)malloc(sizeof(struct node));
	
	newnode->data = newdata;
	newnode->next = prevnode->next;
	prevnode->next = newnode;
}

// Insert at the end
void insertAtEnd(struct node *headref,int newdata){
	
	struct node *newnode = (struct *node)malloc(sizeof(struct node));
	struct node *last = *headref;
	
	newnode->data = newdata;
	newnode->link = NULL;
	
	if(*headref==NULL){
		*headref = newnode;
		return
	}
	
	while(last->next != NULL)
		last = last->next;
	last->next = newnode;
	return;
}

