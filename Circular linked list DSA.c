#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void traversing(struct node *first){
	struct node *p=first;
	do{
		printf("Element is %d\n",p->data);
		p=p->next;
	}
	while(p!=first);
}
struct node *addAtBeginning(struct node *first,int data){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node *p=first->next;
	while(p->next!=first){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=first;
	first=ptr;
	return first;
}
int main(){
	struct node *first,*second,*third,*fourth;
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third =(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	
	first->data=10;
	first->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=first;
	
	printf("Before circular linked list\n");
	traversing(first);
	
	printf("After circular linked list\n");
	first=addAtBeginning(first,50);
	traversing(first);
}

