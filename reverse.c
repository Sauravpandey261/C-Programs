#include<stdio.h>
int main(){
	int rev=0,num,r;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0){
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	printf("reverse is %d",rev);
}

