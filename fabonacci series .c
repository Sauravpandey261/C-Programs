#include<stdio.h>
int fib();
int main(){
	fib();
	fib();
}
int fib(){
	int a=0,b=1,c,i,num;
	printf("enter the number :");
	scanf("%d",&num);
	printf("%d\t%d\t",a,b);
	for(i=0;i<num-2;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
}

