#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
void main()
{
	struct node *tail, *temp, *newnode;
	int choice=1;	tail=0;
   while(choice){
   
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data for node = ");
    scanf("%d", &newnode->data);
    newnode->next=0;
    if(tail==0)
    {
    	tail=temp=newnode;
    	tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
	}
	printf("Do you want to continue(0,1)= ");
	scanf("%d", &choice);
	
}
temp=tail->next;
printf("\nThe circular linked list is as folows :- ");
while(temp->next!=tail->next)
{
	printf("%d, ", temp->data);
	temp=temp->next;
}
printf("%d, ", temp->data);

newnode=(struct node *)malloc(sizeof(struct node));
printf("\nEnter data you want at the beigning = ");
scanf("%d", &newnode->data);
newnode->next=0;
//changing the adress part of last and newnode:
newnode->next=tail->next;
tail->next=newnode;
//printing the updated list:
temp=tail->next;
printf("\nThe circular linked list is as folows :- ");
while(temp->next!=tail->next)
{
	printf("%d, ", temp->data);
	temp=temp->next;
}
printf("%d, ", temp->data);



}

