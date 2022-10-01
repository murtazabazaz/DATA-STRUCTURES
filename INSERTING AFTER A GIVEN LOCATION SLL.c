#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
};
void main()
{
	struct node *head, *temp, *newnode;
	int choice=1; int count =0; head=0;
	int pos, i=1;
	while(choice){
	
	newnode=(struct node *) malloc (sizeof(struct node));
	printf("ennter data for new node = ");
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
	printf("to continue press(0,1) = ");
	scanf("%d", &choice);
	
}
temp=head;
printf("the linked list is as follows:- ");
while(temp!=0)
{
	printf("%d, ", temp->data);
	temp=temp->next;
	count++;
}


printf("\nenter position after which you want to insert = ");
scanf("%d", &pos);
if(pos>count)
{
	printf("invaalid position");
	
}
else
{
	temp=head;
	while(i<pos){
		temp=temp->next;
		i++;
	}
	newnode=(struct node *)malloc (sizeof(struct node));
	printf("enter number to be inserted = ");
	scanf("%d", &newnode->data);
	newnode->next=temp->next;
	temp->next=newnode;
}
temp=head;
printf("The updated linked list is :- ");
	while(temp!=0)
	{
		printf("%d, ", temp->data);
		temp=temp->next;
			}
	
}
