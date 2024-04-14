#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
struct node *head; 
	void insertAtBegining();
void countNode(struct node *head){
	struct node *temp;
	int count=0;
	temp=head;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	printf("%d\n",count);
}
void insertAtBeginning()  
{  
	 
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted");  
    }  
      
}  
int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	struct node *second=(struct node *)malloc(sizeof(struct node));
	struct node *third=(struct node *)malloc(sizeof(struct node));
	struct node *fourth=(struct node *)malloc(sizeof(struct node));
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=fourth;
	fourth->data=40;
	fourth->next=NULL;
	countNode(head);

}
