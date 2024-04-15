#include<stdio.h>
int main(){
	int num,i,count=0;
	printf("enter the number :");
	scanf("%d",&num);
	while(num>0){
	    num=num/10;
		count++;
	}
	printf("no. of digits are :%d",count);
}
