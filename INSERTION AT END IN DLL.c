//INSERTION AT THE END OF DOUBLY LINKED LIST:
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
	int choice=1;
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
		
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n ENTER NUMBER YOU WANT AT THE END = ");
	scanf("%d", &newnode->data);
	newnode->next=0;
	newnode->prev=0;
	newnode->prev=tail;
	tail->next=newnode;
	tail=newnode;
		temp=head;
	printf("\n THE DOUBLY LINKED LIST IS :- ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		
	}
	
	}
