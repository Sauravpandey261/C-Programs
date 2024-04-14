#include<stdio.h>
int main(){
	int fact=1,a,num,i,count,o;
	while(1){
	printf("\nenter 1 for factorial, 2 for odd even, 3 for prime, 4 for exit\n");
	scanf("%d",&o);
	switch(o){
		while(num==10){
		case 1:
			printf("enter the number :");
			scanf("%d",&num);
			for(i=1;i<=num;i++){
				fact=fact*i;
		}
			printf("factorial of num is %d\n",fact);
		break;
		
		case 2:
			printf("enter the number:");
			scanf("%d",&a);
			if(a%2==0){
			printf("number is even\n");
			}
		else
			printf("number is odd\n");
		break;
		
		case 3:
			printf("enter the number :");
	    	scanf("%d",&num);
		for(i=1;i<=num;i++){
			if(num%i==0){
	   		count++;
			}
		}
		if(count==2)
			printf("prime no.\n");
		else
			printf("not a prime no.\n");
		break;
			default:
			exit(0);
		}
	}
}
}

