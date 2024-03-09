#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
void traversing(struct node *ptr){
	int count=0;
	while (ptr!=NULL){
	printf("%d\n",ptr->data);
	ptr=ptr->next;
	count++;
	}
	}
struct node * deletefirst(struct node *first){
	struct node *ptr=first;
	first=first->next;
	free(ptr);
	return first;
			
}
int main(){
	struct node *first,*second,*third;
	
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
 
first->data=15;
first->next=second;
second->data=20;
second->next=third;
third->data=25;
third->next=NULL;
first=deletefirst(first);
traversing(first);
}
 
 
 
 
 
 
 
 
 
 

