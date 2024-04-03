#include<stdio.h>
int foo(int val){
	int x=0;
	while(val>0){
		x=x+foo(val--);
	}
	return val;
}
int bar(int val){
	int x=0;
	while(val>0){
		x=x+bar(val-1);
	}
	return val;
}
int main(){
	printf("%d",foo(3));
	printf("%d",bar(3));
}
