#include<stdio.h>
int sumelements(int a[],int size){
	int i,sum=0;
	for(i=0;i<=size;i++){
		sum=sum+*(a+i);
	}
return sum;
}
int main(){
	int a[]={5,10,15,20,25};
	int v;
	int size=sizeof(a)/sizeof(a[0]);
	v=sumelements(a,size);
	printf("sum of elements is :%d",v);
}
