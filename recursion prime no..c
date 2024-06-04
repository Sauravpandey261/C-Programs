#include<stdio.h>
int prime(int i, int num){
	if(num==i){
		return 0;
	}else{
		if(num%i==0){
			return 1;
		}else{
			return prime(i+1,num);
		}
	}
}
int main(){
	int num=7;
	if(prime(2,num)==0){
		printf("it is a prime no.");
	}else{
		printf("it is not a prime no.");
	}
}
