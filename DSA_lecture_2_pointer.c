#include<stdio.h>
void func(int *p){
	*p=*p+5;
	printf("Inside function %d\n",*p);
}
int main(){
	int x=10;
	func(&x);
	func(&x);
	func(&x);
	printf("Outside function %d\n",x);
}
