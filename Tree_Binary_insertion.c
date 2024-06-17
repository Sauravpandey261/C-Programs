#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left, *right;
};
struct node *newnode(int item){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->left=temp->right=NULL;
	return temp;
}
void inorder(struct node *root){
	if(root!=NULL){
		printf("left elem:-");
		inorder(root->left);
		printf("\n%d",root->data);
		printf("right elem:-");
		inorder(root->right);
	}
}
struct node *insert(struct node *node,int val){
	if(node==NULL){
		return newnode(val);
	}
	if(val<node->data){
		node->left=insert(node->left,val);
	}
	else if(val>node->data){
		node->right=insert(node->right,val);
	}
	return node;
}
int main(){
	struct node *root=NULL;
	root=insert(root,100);
	insert(root,11);
	insert(root,6);
	insert(root,8);
	insert(root,19);
	insert(root,4);
	insert(root,10);
	insert(root,5);
	insert(root,17);
	insert(root,43);
	insert(root,49);
	insert(root,31);
	inorder(root);
}

