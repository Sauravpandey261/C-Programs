#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int f;
	int r;
	int *arr;
};
int isEmpty(struct queue *q){        
	if(q->f==q->r){                     //JB ADDRESS PASS HOGA TO ->(ARROW) USE HOGA 
		printf("Queue is empty");
		return 1;
	}
	else{
		printf("Queue is not empty");
		return 0;
	}
}
int main(){
	struct queue q;
	q.size=10;
	q.f=q.r=0;
	q.arr=(int *)malloc(q.size*sizeof(int));
	isEmpty(&q);
}

