#include<stdio.h>
int fact(int n);
int main(){
	int num;
	printf("enter the number to find the factorial of :");
	scanf("%d",&num);
	printf("factorial is : %d",fact(num));
}
int fact(int n){
	if(n==0){
		return 1;
	}
	return fact(n-1)*n;
}

