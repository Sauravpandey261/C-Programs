#include<stdio.h>
void change(int a);
void change(int a){
	a=77;
	printf("%d\n",a);
}
int main(){
	int b=233;
	printf("the value of b before change is %d\n",b);
	change(b);
	printf("the value of b after change is %d\n",b);
}
