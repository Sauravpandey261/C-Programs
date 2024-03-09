#include<stdio.h>
int main(){
	int arr[10],i,size,pos;
	printf("enter the size:");
	scanf("%d",&size);
	for(i=0;i<=size-1;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the position of element:");
	scanf("%d",&pos);
	for(i=pos-1;i<=size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
	for(i=0;i<=size-1;i++){
		printf("%d\t",arr[i]);
	}
}
