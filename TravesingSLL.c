#include <stdio.h>
#include <stdlib.h>

// self referential structure
struct node{
	int data;
	struct node *next;
};

// fn to count node
void countnodes(struct node *head){
	int count=0;
	
	if(head == NULL)
		printf("Linked List Empty!");
	
	// initialize an temp ptr to traverse
	struct node *ptr = NULL;
	ptr = head;
	
	// traversing the temp ptr till the last node 
	while(ptr!=NULL){
		count++;
		ptr = ptr->next;
	}	
	printf("%d",count); 
}

int main(){
	
	// creation of SLL
	
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
	
	countnodes(head);
}
