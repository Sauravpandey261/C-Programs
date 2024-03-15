//	pointer are of 4 types in C:
//	1= Null pointer  	-> Assign null value to pointer
//	2= Void pointer  	-> typecast is important
//	3= Wild pointer	 	-> there is no value assign to pointer
//	4= Dangling pointer	-> 

#include<stdio.h>
int main(){
	int *p=NULL;
	int i;
	printf("THe value inside variable ptr is: %d",p);
	char alpha='c';
	void *ptr;
	ptr=&alpha;
	printf("\n%c",*(char*)ptr);
	int number=20;
	int *ptr1;
	ptr1=NULL;
	ptr1=(int *)calloc(5,4);
	for(i=0;i<5;i++){
		ptr1[i]=20;
	}
	for(i=0;i<5;i++){
		printf("\n%d",ptr1[i]);
		printf("\n%d",&ptr1[i]);
	}
}
