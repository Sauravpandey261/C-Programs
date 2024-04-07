#include<stdio.h>
void leapyear();
void naly();
	int main(){
		int yr;
	    printf("enter the year:");
	    scanf("%d",&yr);  
	    if(yr%400==0||yr%100!=0&&yr%4==0){
       leapyear(); 
		   return 0;	
		}
		else
		NALY();
}
	void leapyear(){
		printf("leap year");
		naly();
	}
	void naly(){
		printf("not a leap year");
	}

