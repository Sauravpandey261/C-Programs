#include<stdio.h>
struct stu{
	int rollno;
	char name[20];
	float marks;
};
int main(){
	struct stu sanjay={1,"sanjay",89.85};
	struct stu harsh={2};
	printf("%s",sanjay.name);
	printf("you got %f marks",sanjay.marks);
	printf("whose roll no is %d",sanjay.rollno);
	printf("\n%d",harsh.rollno);
	printf("\n%s",harsh.name);
	pirntf("\n%f",harsh.marks);
	}

