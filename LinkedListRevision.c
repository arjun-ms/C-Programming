#include <stdio.h>
#include <stdlib.h>

// self referential structure
struct node{
	int data;
	struct node *next;
};

int main(){
	// creating the head
	struct node *head = NULL;
	// allocating memory to the head with size of struct node
	head = (struct node*)malloc(sizeof(struct node));
	
	// accessing data and next through head*
	head->data = 45;
	head->next = NULL;
	
	printf("%d",head->data);
	return 0;
}


