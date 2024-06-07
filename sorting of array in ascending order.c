#include<stdio.h>
int main(){
	int arr[]={9,5,3,8,7},i,j,temp;
	for(i=0;i<=4;i++){
		for(j=i;j<=4;j++){
			if(arr[i]>=arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("sorting of an array in ascending order: ");
for(i=0;i<=4;i++){
	printf("%d",arr[i]);
}
}
