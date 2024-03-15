#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
struct node *top= NULL;
void push(int x){
	struct node * newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
void display(){
	struct node *temp;
	temp=top;
	if(temp==NULL){
		printf("Empty stack");
	}
	else{
		while(temp!=NULL){
			printf("\n%d",temp->data);
			temp=temp->next;
		}
	}
}
void pop(){
	struct node *temp=top;
	top=top->next;
	printf("Popped element is %d\n",temp->data);
	free(temp);
}
void peak(){
	if(top==NULL){
		printf("stack is empty");
	}
	printf("\nPeak element is %d\n",top->data);
}
void countnum(){
	struct node *temp=top;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	
	}
	printf("Total node are %d\n",count);
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	push(50);
	display();
	peak();
	countnum();
	display();

}
