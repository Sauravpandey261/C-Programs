#include<stdio.h>
#include<conio.h>
void namaste();
void bonjour();
int main(){
    printf("enter f for french and i for indian:");
    char ch;
    getch();
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }
    else{
        bonjour();
    }
}
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}

