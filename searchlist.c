#include<stdio.h>

struct Node{
	int data;
	struct Node *next;
};
void search(struct Node *p,int key){
	int flag;
	while(p!=NULL){
		if(p->data==key){
			flag=1;
			break;
		}
	
	p=p->next;}

 if(flag==1){
	printf("Key is found ");	
}
else{
	printf("key not found");
}
}
int main(){
	struct Node *first,*second,*third,*fourth;
	first=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third =(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	first->data=15;
	first->next=second;
	
	second->data=23;
	second->next=third;
	
	third->data=13;
	third->next=fourth;
	
	fourth->data=55;
	fourth->next=NULL;
	
	search(first,15);
	//traversing(first);
}
