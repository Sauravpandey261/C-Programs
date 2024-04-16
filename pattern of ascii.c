#include<stdio.h>
int main(){
	int i,j;
	int rows;
	printf("enter the rows:");
	scanf("%d",&rows);
	for(i=65;i<=(65+rows);i++){
		for(j=65;j<=i;j++){
			printf("%c",j);
		}
		printf("\n");
	}
}
