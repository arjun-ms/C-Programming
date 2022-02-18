#include <stdio.h>
#include <stdlib.h>

// self referential structure
struct node{
	int data;
	struct node *next;
};

int main(){
	// setting head to null
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->next = NULL;
	
	struct node *temp = malloc(sizeof(struct node));
	temp->data = 95;
	temp->next = NULL;
	head->next = temp;
	
	temp = malloc(sizeof(struct node));
	temp->data = 3;
	temp->next = NULL;
	head->next->next = temp;
	
	
	
	return 0; 

}


