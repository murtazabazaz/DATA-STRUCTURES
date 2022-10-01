//INSERTING ELEMENT AT THE END OF THE SINGLY LINKED LIST :

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;	
};
void main()
{
   struct node *head, *temp, *newnode;
   int choice = 1;
   int count=0;int count1 = 0;
   head=0;
   while(choice)
   {
   	newnode=(struct node *)malloc(sizeof(struct node));
   	printf("-> Enter data for node = ");
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
	printf("-> Do you want to continue(0,1) = ");
	scanf("%d", &choice);
   }	
   temp=head;
   printf("\n -> The singly linked list is as follows -: ");
   while(temp!=0)
   {
   	printf("%d, ", temp->data);
   	temp=temp->next;
   	count++;
   	
   }
   printf("\n\n-> Total number of nodes in the linked list = %d nodes", count);
   
   newnode=(struct node *)malloc(sizeof(struct node));
   printf("\n\n-> Enter element you want to insert at the end = ");
   scanf("%d", &newnode->data);
   newnode->next=0;
   temp=head;
   while(temp->next!=0)
   {
   	temp=temp->next;
   }
   temp->next=newnode;
   //PRINTING THE UPDATED SINGLY LINKED LIST:
   temp=head;
   printf("\n-> the updated linked list -: ");
   while(temp!=0)
   {
   	printf("%d, ", temp->data);
   	temp=temp->next;
   	count1++;
   }
   printf("\n->The updated linked list has = %d nodes", count1);

}
