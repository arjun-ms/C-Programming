#include <stdio.h>
#include <stdlib.h>

// self referential structure
struct node{
	int data;
	struct node *next;
};

// deletion from beginning
//++++++++++++++++++++++++//

struct node* delbeg(struct node *head){
	if(head == NULL)
		printf("List empty");
	else{
		struct node *traverse = head;
		head = traverse->next;
		free(traverse);
	}
	return head;
}


// insertion at end
//++++++++++++++++++++++++//

void addend(struct node *head){
	
	struct node *newnode = malloc(sizeof(struct node));
	newnode->data = 111;
	
	struct node *traverse = malloc(sizeof(struct node));
	traverse = head;
	
	while(traverse->next!=NULL){
		traverse = traverse->next;
	}
	traverse->next = newnode;
}

// insertion at a specific loc
//++++++++++++++++++++++++//

void addatspecificloc(struct node* head,int x){
	struct node *newnode = malloc(sizeof(struct node));
	newnode->data = 99;
	
	struct node *temp = malloc(sizeof(struct node));
	temp = head;

	while(temp->data != x){
		if(temp->next == NULL){
			printf("insertion not possible, given node not found ");
			break;
		}
		else
			temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;

}

int main(){
	// setting head to null
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->next = NULL;
	
	struct node *temp = malloc(sizeof(struct node));
	temp->data = 95;
	temp->next = NULL;
	
	// updating head to link with temp
	head->next = temp;
	
	temp = malloc(sizeof(struct node));
	temp->data = 3;
	temp->next = NULL;
	
	// updating 2nd node to link with 3rd node
	head->next->next = temp;
	 
	delbeg(head);
	temp = head;
	
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	
	
	return 0; 

}


