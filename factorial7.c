#include<stdio.h>
int main(){
int i;
int num;
unsigned long int fact=1;
printf("enter the number:");
scanf("%d",&num);
for(i=1;i<=num;i++){
	fact=fact*i;
}
printf("%d",fact);
}
