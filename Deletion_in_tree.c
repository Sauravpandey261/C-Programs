#include<stdio.h>
#include<stdlib.h>
struct node *removeNode(struct node *root,int val){
	if(root==NULL){
		return NULL;
	}
	if(root->key < val){
		root->right = removeNode(root->right,val);
	}
	else if(root->key>val){
		root->left=removeNode(root->left,val);
	}
	else{
		if(root->left == NULL && root->right == NULL){
			free(root);
			return NULL;
		}
		else if(root->left == NULL){
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL){
			struct node *temp = root->left;
			free(root);
			return temp;
		}
	}
}
int main(){
	
}
