#include<stdio.h>
	int sum(int a,int b);
	int sum(int a,int b){
    int sum=a+b;
	return sum;
}
int main(){
int a=5;
int *p=&a;
int b=10;
int *q=&b;
printf("%d",sum(&a,&b));
}
