#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left, *right;
};
struct node *create(){
	struct node *newnode;
	int data,choice;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Press 0 to exit");
	printf("\nPress 1 for new node");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	if(choice==0){
		return 0;
	}
	else{
		printf("Enter the data: ");
		scanf("%d",&data);
		newnode->data=data;
		printf("Enter the left child :");
		newnode->left=create();
		printf("Enter the right child :");
		newnode->right=create();
		return newnode;
	}
}
void main(){
	struct node *root;
	root = create();
}

