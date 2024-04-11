#include<stdio.h>  
#include<stdlib.h>  
void main(){  
  int n,i,*ptr;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    printf("enter the values");
    for(i=0;i<n;i++){
    	scanf("%d",(ptr+i));
	}
	printf("\n The entered values is:\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(ptr+i));
		printf("%d\n",(ptr+i));
	}
	free(ptr);
}

