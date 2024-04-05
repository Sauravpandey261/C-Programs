#include<stdio.h>
int main(){
	int num,i,r;
	int temp=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0){
		r=num%10;
		if(r>temp){
		temp=r;
	}
		num=num/10;
	}
	printf("Largest digit in a number :%d",temp);
}
