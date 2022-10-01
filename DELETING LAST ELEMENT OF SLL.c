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
printf("\n The linked list is as follows:- ");
while(temp!=0)
{
	printf("%d, ", temp->data);
	temp=temp->next;
	count++;
}
struct node* prevnode;
temp=head;
while(temp->next!=0)
{
	prevnode=temp;
	temp=temp->next;
}
if(temp==head)
{
	head=0;
	free(temp);
	
}
else{
	prevnode->next=0;
	
}
free(temp);
temp=head;
printf("\n The linked list after deleting last element is as follows:- ");
while(temp!=0)
{
	printf("%d, ", temp->data);
	temp=temp->next;
	count++;
}
}
