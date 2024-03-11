#include<stdio.h>
int main(){
	int x=10;
	int *p;
	p=&x;
	printf("%d\n",x);
	printf("%x\n",p);
	printf("%x\n",&p);	
	printf("%d\n",*p);
	*p=*p+30;
	printf("%d\n",x);		
	printf("%d\n",*p);		
}
