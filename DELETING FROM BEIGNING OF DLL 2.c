//Deleting from beigning of doubly linked list :
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	char b[30];
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
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter your age  = ");
		scanf("%d", &newnode->data);
		printf("Enter your name :- ");
		scanf("%s", &newnode->b);
		newnode->prev=0;
		newnode->next=0;
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
		printf("Do you want to contiue(0,1) = ");
		scanf("%d", &choice);
		
	}
	temp=head;
	printf("The Age and Name of the student :-\n ");
	while(temp!=0)
	{
		printf("%d years, Name-: %s \n", temp->data, temp->b);
		temp=temp->next;
		
	}
	temp=head;
	head=head->next;
	head->prev=0;
	free(temp);
	//printing the list after deletion:
	temp=head;
	printf("\nThe updated list after deleting first node :- \n");
	while(temp!=0)
	{
		printf("%d years, Name -: %s \n", temp->data,temp->b);
		temp=temp->next;
	}
	
}
