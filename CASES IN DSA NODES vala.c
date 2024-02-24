#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int sum(struct Node *p){
	int sum=0;
	while(p!=NULL){
			sum=sum+p->data;		
	p=p->next;
}
  	return sum;
}
void traversing(struct Node *ptr){
	int count=0;
	while (ptr!=NULL){
	printf("\n%d",ptr->data);
	ptr=ptr->next;
	count++;
	}
	}


void merge(struct Node *first,struct Node *fifth){
	struct Node *p=first;
	while(p->next!=NULL){
		printf("\n%d",p->data);
	p=p->next;
}
	p->next=fifth;
	while(p->next!=NULL){
		printf("\n%d",p->data);
		p=p->next;
	}
}
void search(struct Node *p,int key){
	int flag;
	while(p!=NULL){
		if(p->data==key){
			flag=1;
			break;
		}
	
	p=p->next;}

 if(flag==1){
	printf("Key is found \n");	
}
else{
	printf("key not found \n");
}
}
	struct Node *deleteAtIndex(struct Node *first,int index){
	struct Node *p=first;
	struct Node *q=first->next;
	int i;
	for(i=0;i<index-1;i++){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return first;	
	
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
	
	int choice;
	
	while(1){
printf("\nenter 1 for sumation 2 for traversing 3 for merging 4 for search 5 for deletion 6 to exit:\n");
scanf("%d",&choice);

switch(choice){

	case 1:	
    printf("\n%d",sum(first));
    break;
    
    case 2:
	traversing(first);
	break;
	
	case 3:
	merge(first,fifth);
	break;
	
	case 4:
	search(first,20);
	break;
	
	case 5:
	deleteAtIndex(first,1);
	traversing(first);
	break;
	
	default :
		exit(0);
	
}
}
}

