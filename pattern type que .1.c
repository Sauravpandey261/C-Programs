#include<stdio.h>
int main(){
	int i,num,j;
	printf("enter the number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
