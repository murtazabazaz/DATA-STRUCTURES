//DELETINF FIRST ELEMENT OF DOUBLY LINKED LIST:
#include<stdio.h>
#include<stdlib.h>
struct node{
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
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter data for node = ");
		scanf("%d", &newnode->data);
		newnode->next=0;
		newnode->prev=0;
		if(head==0)
		{
			head=tail=newnode;
		}
		else{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
		printf("Do you want to continue(0,1) = ");
		scanf("%d", &choice);
	}
	temp=head;
	printf("\n-> The doubly linked list is -: ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		
	}
	
	if(head==0)
	{
		printf("The list is empty:");
		
	}
	else{
		temp=head;
		head=head->next;
		head->prev=0;
	
	    free(temp);
	}
	   
		temp=head;
	printf("\n\n-> The doubly linked list after deletion of first element is -: ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		
	}
}
