#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int f;
	int r;
	int *arr;
};
int isEmpty(struct queue *q){        
	if(q->f==q->r){                    
		printf("Queue is empty\n");
		return 1;
	}
	else{
		printf("Queue is not empty\n");
		return 0;
	}
}
int isFull(struct queue *q){        
	if(q->f==q->r){                     
		printf("Queue is empty\n");
		return 1;
	}
	else{
		printf("Queue is not empty\n");
		return 0;
	}
}

int enque(struct queue *q,int val){
	if(isFull(q)){
		printf("Queue is full\n");
	}
	else{
		q->r++;
		q->arr[q->r]=val;
		printf("Enqued element is %d\n",val);
	}
}
int main(){
	struct queue q;
	q.size=10;
	q.f=q.r=0;
	q.arr=(int *)malloc(q.size*sizeof(int));
	isEmpty(&q);
	if(isFull(&q)){
		printf("Queue is Full\n");
	}
	enque(&q,15);
}

