#include<stdio.h>
struct Node{
	int data;
	struct Node *next;
};
void merge(struct Node *first,struct Node *fifth){
	struct Node *p=first;
	while(p->next!=NULL){
		printf("%d\n",p->data);
	p=p->next;
}
	p->next=fifth;
	while(p->next!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}

	
}
int main(){
	struct Node *first,*second,*third,*fourth,*fifth,*sixth,*seventh,*eighth;
	first=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third =(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));
	sixth=(struct Node*)malloc(sizeof(struct Node));
	seventh=(struct Node*)malloc(sizeof(struct Node));
	eighth=(struct Node*)malloc(sizeof(struct Node));
	
	first->data=10;
	first->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=NULL;
	
	fifth->data=50;
	fifth->next=sixth;
	
	sixth->data=60;
	sixth->next=seventh;
	
	seventh->data=70;
	seventh->next=eighth;
	
	eighth->data=80;
	eighth->next=NULL;
	
	merge(first,fifth);
}

