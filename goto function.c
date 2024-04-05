#include<stdio.h>
int main(){
	int num,i=1;
	printf("Enter the no:");
	scanf("%d",&num);
	done:
		printf("%d*%d=%d\n",num,i,num*i);
		i++;
		if(i<=10){
			goto done;
		}
}

