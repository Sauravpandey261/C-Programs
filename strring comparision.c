#include<stdio.h>
#include<string.h>              //string comparision
int main(){
	char a[10];
	printf("enter the string:");
	gets(a);
	char b[10];
	printf("enter the string:");
	gets(b);
	int c=strcmp(a,b);
	if(c==0){
		printf("equal");
	}
	else{
		printf("not equal");
	}
}
