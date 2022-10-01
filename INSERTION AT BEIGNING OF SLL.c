  //INSERTING ELEMENT AT THE BEIGNING OF THE SINGLY LINKED LIST:
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
 void main()
 {
 	struct node *head, *newnode, *temp;
 	int choice = 1;
 	int count = 0; int count2=0;
 	head=0;
 	while(choice)
 	{
 		newnode=(struct node *)malloc(sizeof(struct node));
 		printf("Enter data for node = ");
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
		 printf("Do you want to continue(0,1) = ");
		 scanf("%d", &choice);
		 
	}
	temp=head;
	printf("\n -> The Elements of Singly Linked List you entered are -: ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		count++;
	}
	printf("\n\n -> The number of nodes in the Singly linked list are = %d nodes", count);
	
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\n\n -> Enter element you want to insert at the beigning of the list = ");
	scanf("%d", &newnode->data);
	newnode->next=0;
	newnode->next=head;
	head=newnode;
	//NOW PRINTING THE UPDATED LIST:
	temp=head;
	printf("\n -> The updated Singly linked list = ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
		count2++;
	}
	printf("\n -> The updated singly linked list has = %d nodes", count2);
 }
