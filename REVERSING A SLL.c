#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
void main()
{
	struct node *head, *temp, *newnode;
	int choice = 1;int count = 0;head=0;
	while(choice)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter element of Node = ");
		scanf("%d", &newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("To continue press(0,1) = ");
		scanf("%d", &choice);
		
	}
	temp=head;
	printf("\n The linked list is as follows:- ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		count++;
	}
	struct node *prevnode, *currentnode, *nextnode;
	prevnode=0;
	currentnode=nextnode=head;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
	temp=head;
	printf("\n The reversed linked list is :- ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		
	}
	
}
