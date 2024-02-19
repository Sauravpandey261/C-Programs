#include<stdio.h>
int main(){
	float c,k,f;
	printf(" enter temperature in celcius: ");
	scanf("%f",&c);
	k=c+273.15;
	f=c*(9/5)+32;
	printf("temp in kelvin is: %f\n",k);
	printf("temp in farenheit is: %f",f);
}
