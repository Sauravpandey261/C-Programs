#include<stdio.h>
int main(){
	int num,i,r;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num>8){
		r=num%8;
		num=num/8;
		printf("%d",r);
	}
}
