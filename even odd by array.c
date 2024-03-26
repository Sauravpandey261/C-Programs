#include<stdio.h>
int main(){
	int i,arr[]={4,2,3,7,8,9,1};
	printf("even no. are:\n");
	for(i=0;i<6;i++){
		if(arr[i]%2==0){
			printf("%d\n",arr[i]);
		}
	}
	printf("odd no. are:\n");
    for(i=0;i<6;i++){
		if(arr[i]%2!=0)
		printf("%d\n",arr[i]);
	}
}
