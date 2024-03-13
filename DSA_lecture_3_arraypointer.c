#include<stdio.h>
void func(int arr[],int n){
	int i;
//	int n=sizeof(arr)/sizeof(int);
	printf("\n%d",n);
	for(i=0;i<n;i++){
		printf("\n%d",arr[i]);
	}
}
int main(){
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(int);
	printf("\n%d",n);
	func(arr,n);
}

