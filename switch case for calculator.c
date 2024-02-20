#include<stdio.h>
int main(){
	int a,b,add,sub,mul,choice;
	float div;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("enter 1 for add,2 for sub,3 for mul,4 for div,5 for exit");
	scanf("%d",&choice);
switch(choice){
	case 1:
		add=a+b;
		printf("addion is %d",add);
		break;
	case 2:
		sub=a-b;
		printf("subtraction is %d",sub);
		break;
	case 3:
		mul=a*b;
		printf("mul is %d",mul);
		break;
	case 4:
		div=a/b;
		printf("div is %f",div);
		break;
	case 5:
		printf("thanku");
}
	}
		

