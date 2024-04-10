#include<stdio.h>
int main(){
	int sp,cp,p,l;
	printf("enter the cost price:");
	scanf("%d",&cp);
	printf("enter the selling price:");
	scanf("%d",&sp);
	p=sp-cp;
	l=cp-sp;
	if(p>0){
		printf("profit is %drs",p);
	}
	else if (l>0){
		printf("loss is %drs",l);
	}
	else if(p==0){
	printf("no loss no profit");
}
}
