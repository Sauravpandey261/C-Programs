#include<stdio.h>
#include<stdlib.h>
void enque();
void deque();
void display();
int queue[100],front=-1,rear=-1,size=5,i;
void enque(int value){
	if (rear==size-1){
		printf("overflow\n");
	}
	else{
			front=0;
			rear++;
			queue[rear]=value;
			printf("inserted element is %d\n",value);
	}
}
void display(){
	int i=0;
	for(i=front;i<=rear;i++){
		printf("%d element is %d\n",i,queue[i]);
	}
}
void deque(){
	if(front==-1){
		printf("\nUnderflow");
	}
	else{
		front++;
		if(front>rear){
			front=rear=-1;
		}
	}
}
int main(){
	enque(5);
	enque(3);
	enque(6);
	enque(7);
	deque();
	display();
	
}
