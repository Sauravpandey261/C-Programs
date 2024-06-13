#include<stdio.h>
struct stu{
	int rollno;
	char name[20];
	float marks;
};
int main(){
	int i;
	struct stu s[3];
	for(i=1;i<3;i++){
		printf("Enter the rollno.:");
	    scanf("%d",&s[i].rollno);
		printf("Enter the Name:");
		scanf("%s",s[i].name);
		printf("Enter the marks:");
		scanf("%f",&s[i].marks);
	}
	for(i=1;i<3;i++){
	printf("%d\n%s\n%f\n",s[i].rollno,s[i].name,s[i].marks);
}
}
