#include<stdio.h>
	struct node{
	int data;
	struct node *next;
};
void traversing(struct node *ptr){
	int i=0;
	while(ptr!=NULL){
		printf("%d node is %d\n",i,ptr->data);
		i++;
		ptr=ptr->next;
	}
}
struct node *reverse(struct node *first){
	struct node *prev=NULL,*ptr=first,*q;
	while(ptr!=NULL){
		q=ptr->next;
		ptr->next=prev;
		prev=ptr;
		ptr=q;
	}
	ptr=prev;
	return ptr;
}
int main(){
	struct node *first,*second,*third,*fourth,*fifth,*sixth,*seventh,*eighth;
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
	fourth->next=NULL;
	
	first=reverse(first);
	traversing(first);
}
