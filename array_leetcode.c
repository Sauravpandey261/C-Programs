#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[]={1,2,2,3,3,3,4,5,5,6};
	int i;
	int array[]={};
	int length=sizeof(arr)/sizeof(int);
	for(i=0;i<length;i++){
		if(arr[i]!=arr[i+1]){
		array[i]=arr[i];
	}
		else{
			i=i+1;a
		}
		
	}
	for(i=0;i<length;i++){
		printf("%d\n",array[i]);
	}
}
