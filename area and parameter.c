#include<stdio.h>
int main(){
	int l,b,r;
	printf("enter the length :");
	scanf("%d",&l);
	printf("enter the breadth :");
	scanf("%d",&b);
	printf("enter the radius:");
	scanf("%d",&r);
	printf("parameter of rectangle is: %d\n",2*(l+b));
	printf("area of rectangle is: %d\n",l*b);
	printf("area of circle is: %f\n",3.14*r*r);
	printf("circumference of circle is :%f\n",2*3.14*r);
}
