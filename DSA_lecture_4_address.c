#include<stdio.h>
int main(){
	int arr[]={10,20,30,40,50};
	int *ptr=arr;
	printf("\n%d %p",*ptr,ptr);
	ptr++;
	printf("\n%d %p",*ptr,ptr);
	*ptr=*ptr+2;
	printf("\n%d %p",*ptr,ptr);
	ptr=ptr+2;
	printf("\n%d %p",*ptr,ptr);
}
