#include<stdio.h>
 void main()
 {
 	struct node
 	{
 		int data;
 		struct node * next;
         	 
	 };
	 struct node *head, *temp, *newnode;
	 int choice=1; head=0;int count=0;
	 while(choice){
	 newnode=(struct node *) malloc(sizeof(struct node));
	 printf("Enter data = ");
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
	 	printf("Do you want to continue, 1 for yes 0 for no = ");
	 	scanf("%d", &choice);
	 }
	 temp=head;
	 while(temp!=0)
	 {
	 	printf("%d, ", temp->data);
	 	temp = temp->next;
	 	count++;
	 }
	 printf("\n The number of nodes created = %d nodes", count);
	 
	  
 }
