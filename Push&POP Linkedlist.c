#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;

void push(int val){
struct node *newNode=malloc(sizeof(struct node));
newNode->data=val;

newNode->next=head;
head=newNode;	

}
void pop(){
	struct node *temp;
	if(head==NULL){
		printf("stack is uonderflow");
	}
	else{
		printf("Poped element is %d\n",head->data);
		temp=head;
		head=head->next;
		free(temp);
	}
}
display(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	display();
	pop();
	pop();
	display();
}

