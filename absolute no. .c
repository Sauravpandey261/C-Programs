#include<stdio.h>
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num>=0){
		printf("absolute number is %d",num);
		
	}
	else if(num<0){
		printf("absolute number is %d",num*-1);
	}
}
