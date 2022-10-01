//INSERTION AT THE GIVEN POSITION OF DOUBLY LINKED LIST:
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
	
};
void main()
{
	struct node *head, *tail, *newnode, *temp;
	int choice=1;int count=0;int pos;int i=1;
	head=0;
	while(choice)
	{
		newnode=(struct node *)malloc (sizeof(struct node));
		printf("ENTER DATA FOR THE NODE = ");
		scanf("%d", &newnode->data);
		newnode->next=0;
		newnode->prev=0;
		if(head==0)
		{
			head=tail=newnode;
		}
		else
		{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;	
		}
		printf("DO YOU WANT TO CONTINUE(0,1) = ");
		scanf("%d", &choice);
		
	}
	temp=head;
	printf("\n THE DOUBLY LINKED LIST IS :- ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		count++;
	}
	printf("\n Enter position at which you want to insert = ");
	scanf("%d", &pos);
	if(1>pos||pos>count)
	{
		printf("invalid position");
	}
	else if(pos==1)
	{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter element you want at the beigning = ");
	scanf("%d", &newnode->data);
	newnode->next=0;
	newnode->prev=0;
	head->prev=newnode;
	newnode->next=head;
	
	head=newnode;
	
	}
	else
	{
		temp=head;
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter data for the new node = ");
		scanf("%d", &newnode->data);
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->prev=newnode;
		
	}
	temp=head;
	printf("\n The updated doubly linked list after insertion :- ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
	}
}
