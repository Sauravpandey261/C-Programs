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
struct node * deleteAtIndex(struct node *first,int index){
	struct node *p=first;
	struct node *q=first->next;
	int i;
	for(i=0;i<index-1;i++){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return first;	
	
}
int main(){
	struct node *first,*second,*third,*fourth;
	
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
fourth=(struct node *)malloc(sizeof(struct node));

first->data=15;
first->next=second;
second->data=20;
second->next=third;
third->data=25;
third->next=fourth;
fourth->data=30;
fourth->next=NULL;
deleteAtIndex(first,1);
traversing(first);
}
 
 
 
 
 
 
 
 
 
 

