#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *arr;
};
int isEmpty(struct stack *ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct stack *ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void pop(struct stack *ptr,int value){
	if(isEmpty(ptr)){
		printf("stack underflow\n");
		return -1;
	}
	else{
		int value=ptr->arr[ptr->top];
		ptr->top--;
		return value;
	}
}

int main(){
	struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=10;
	sp->top=-1;
	sp->arr=(int *)malloc(sp->size*sizeof(int));
	printf("%d\n",isFull(sp));
	printf("%d\n",isEmpty(sp));
	pop(sp);
	printf("%d\n",isFull(sp));
	printf("%d\n",isEmpty(sp));
	
}

