#include<stdio.h>
int main(){
	int num,i,r;
	int temp=0;
	printf("enter the number:");
	scanf("%d",&num);
	temp=num%10;
	num=num/10;
	while(num>0){
		r=num%10;
		if(r<temp){
		temp=r;
	}
		num=num/10;
	}
	printf("Smallest digit in a number: %d",temp);
}
