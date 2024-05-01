#include<stdio.h>
int arr[100],i,j,top=-1,choice,n;
void push();
void pop();
void display();
int main(){
printf("Enter the no of elements you want to insert in an array: ");
scanf("%d",&n);
printf("**Stack operations using array**");
while(choice!=4){
	printf("Choose one from the options:\n1. Push\n2. Pop\n3. Display\n4.Exit\n");
	printf("Enter the choice: \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				push();
				break;
			}
		 case 2:{
		 	pop();
		 	break;
	}
	case 3:
		{
			display();
			break;
		}
	case 4:{
		printf("Exiting the code");
		break;
		}
default:
	{
		printf("Please enter the valid choice :");
	}
}
}
}
void push(){
	int value;
	if (top==n){
		printf("overflow");
	}else{
		printf("ENter the value: ");
		scanf("%d",&value);
		top=top+1;
		arr[top]=value;
	}
}
void pop(){
	if (top==-1){
		printf("underflow");
	}
	else{
		top=top-1;
	}
}
void display(){
	for(i=top;i>=0;i--){
		printf("%d",arr[i]);
	}
}
























