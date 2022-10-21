//IMPLEMENTATION AND CREATING OF CIRCUAR LINKED LIST :
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
void main()
{
	struct node *head, *temp, *newnode;
	int choice=1;
	head=0;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data for node = ");
		scanf("%d", &newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
			
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		temp->next=head;
		printf("Do you want to continue(0,1) = ");
		scanf("%d",&choice);
	}
	temp=head;
	
	printf("\nThis is a Circular linked list :- ");
	while(temp->next!=head)
	{
		printf("%d, ",temp->data );
		temp=temp->next;
	}
	printf("%d ", temp->data);
}
