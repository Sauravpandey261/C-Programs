#include<stdio.h>
int main(){
	int a[2][2],b[2][2],c[2][2],i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	printf("enter the elements a[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("enter the element b[%d][%d]",i,j);
	scanf("%d",&b[i][j]);
	}
}
	printf("a matrix is\n ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	printf("b matrix is\n ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("c matrix is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
	
