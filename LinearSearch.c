#include<stdio.h>
int main(){
	int ele,i;
	int arr[10]={1,2,3,5,6};
	printf("Enter the element to search: ");
	scanf("%d",&ele);
	for(i=0;i<5;i++){
		if(arr[i]==ele){
			printf("%d is in the array at %d position",arr[i],i+1);
		}
		else{
			printf("Element not found ");
		}
}
}

