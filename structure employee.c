#include<stdio.h>
#include<string.h>
struct employee{
	int code;
	float salary;
	char name[10];
	
};
int main(){
	struct employee e1;
	e1.code=100;
	e1.salary=34500.5;
	strcpy(e1.name,"saurav");
	printf("%d\n",e1.code);
	printf("%f\n",e1.salary);
	printf("%s\n",e1.name);
	
	struct employee e2;	
	e2.code=10;
	e2.salary=3500.5;
	strcpy(e2.name,"sachin");
	printf("%d\n",e2.code);
	printf("%f\n",e2.salary);
	printf("%s\n",e2.name);
	
}
