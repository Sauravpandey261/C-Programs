#include<stdio.h>
int sum(int a, int b);
int main(){
	int c;
	int x,y;
	printf("enter numbers :");
	scanf("%d%d",&x,&y);
	c=sum(x,y);
	printf("sum is %d",c);
}
int sum(int a, int b){
	int result;
	result=a+b;
	return result;
}

