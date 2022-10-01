#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node *next;
	};
void main()
{
	
	
	
	struct node *head, *temp, *newnode; 
    head=0; int choice=1; int count=0;
    while(choice)
    {
    	newnode=(struct node*) malloc(sizeof(struct node));
    	printf("Enter data for node = ");
    	scanf("%d", &newnode->data);
    	newnode->next=head;
    	head=newnode;
    
		printf("Do you want to continue(0,1) = ");
		scanf("%d", &choice);
		
	}
	temp=head;
	while(temp!=0){
		printf("%d, ", temp->data);
		temp=temp->next;
		count++;
	}
	

}
