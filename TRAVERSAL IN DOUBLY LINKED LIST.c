#include<stdio.h>
#include<stdlib.h>



	struct node{
	int data;
	struct node *prev;
	struct node *next;
};

void main()
{


	struct node *head, *newnode, *temp;
	int choice = 1;head=0;
	while(choice)
	{
		newnode=(struct node *)malloc (sizeof(struct node));
		printf("enter data ffor node = ");
		scanf("%d", &newnode->data);
		newnode->prev=0;
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
			
		}
		printf("do you want to continue(0,1) = ");
		scanf("%d", &choice);
	}
	temp=head;
	printf("These are the elements of a doubly linked list -: ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		
	}
}
