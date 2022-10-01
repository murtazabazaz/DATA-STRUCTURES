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
if(head==0)
{
	printf("link is empty ");
}
else{
	struct node *temp;
	temp=head;
	head=head->next;
	free(temp);
}
temp=head;
printf("\n The linked list after deletion is as follows:- ");
while(temp!=0)
{
	printf("%d, ", temp->data);
	temp=temp->next;
	count++;
}
}




