#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
	
};
void main()
{
	struct node *head, *temp, *tail, *newnode;
	int choice=1;int count = 0;int count1=0;
	head=0;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data for Node = ");
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
		printf("Do you want to continue(0,1) = ");
		scanf("%d", &choice);
		
	}
	temp=head;
	printf("\nThe doubly ll is as follows -: ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		count++;
	}
	printf("\n The total number of nodes = %d Nodes", count);
	int pos;
	int i=1;
	printf("\n\nEnter position you want to delete from = ");
	scanf("%d", &pos);
	temp=head;
	
	if(pos>count)
	{
		printf("INVALID POSITION!!");
	}
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
	
	//printing nodes after deletion
	temp=head;
	printf("\nThe updated linked list after deletion is :- ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		count1++;
	}
	printf("\n The number of nodes after deletion = %d Nodes", count1);
}
