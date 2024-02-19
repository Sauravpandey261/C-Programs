#include<stdio.h>
void printTable(int n);
void printTable(int n){
	int i;
	for(i=1;i<=10;i++){
		printf("%d\n",i*n);
	}
}
	int main(){
		int num;
		printf("enter the number ");
		scanf("%d",&num);
		printTable(num);
		return 0;
	}

