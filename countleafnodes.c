#include <stdio.h>
#include <stdlib.h>

// initialize a node
struct node{
	int data;
	struct node* left;
	struct node* right;
};

// get count fn
int getLeafCount(struct node* node){
	if(node == NULL){
		return 0;
	}
	else if(node->left==NULL && node->right == NULL){
		return 1;
	}
	else{
		return getLeafCount(node->left) + getLeafCount(node->right);
	}
}

// create a new node
struct node* newNode(int data)
{
	//memory allocation
  struct node* node = (struct node*)malloc(sizeof(struct node));
  
  node->data = data;
  node->left = NULL;
  node->right = NULL;
   
  return node;
}


int main()
{
  /*create a tree*/ 
  // setting root node
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);  
  root->right->left = newNode(6); 
  root->right->right = newNode(7); 
   
  /*get leaf count of the above created tree*/
  printf("Leaf count of the tree is %d", getLeafCount(root));
   
  getchar();
  return 0;
}
