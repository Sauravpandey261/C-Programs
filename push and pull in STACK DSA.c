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
void push(struct stack *ptr,int value){
	if(isFull(ptr)){
		printf("stack overflow\n");
	}
	else{
		int value=ptr->arr[ptr->top];
		printf("value to be pushed is %d",value);
		ptr->top++;
		ptr->arr[ptr->top]=value;
	}
}

int main(){
	struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=10;
	sp->top=-1;
	sp->arr=(int *)malloc(sp->size*sizeof(int));
	printf("%d\n",isFull(sp));
	printf("%d\n",isEmpty(sp));
	push(sp,50);
	printf("%d\n",isFull(sp));
	printf("%d\n",isEmpty(sp));
	
}

