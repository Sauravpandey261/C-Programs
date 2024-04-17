#include<stdio.h>
int sum(int *);
int sum(int *a){
    *a=*a+1;
    return *a;
}
int main(){
    int a=5;
    printf("value of a before function call %d\n",x);
    printf("function call %d\n",sum(&x));
    printf("value of a after function refrence %d\n",x);
}

