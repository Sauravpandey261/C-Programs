#include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("enter f for french and i for indian:");
    char ch;
    scanf("%c",&ch);
    if(ch=='h'){
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

