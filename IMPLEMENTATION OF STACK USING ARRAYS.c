//IMPLEMENTATION OF STACK USING ARRAYS:-

#include<stdio.h>
#include<stdlib.h>


int stack[5];
int top = -1;
void push()
{
	int insert;
	printf("enter data you want to insert = ");
	scanf("%d", &insert);
	if(top==5-1)
	{
		printf("Over-Flow Condition");
	 } 
	 else{
	 	top++;
	 	stack[top]=insert;
	 }
}
void pop()
{
int item;
if(top==-1)
{
	printf("Under-Flow Condition");
}	
else{
item=stack[top];
	top--;
}
printf("The item you wanted to pop is = %d \n", item);
}

void peek()
{
	if(top==-1)
	{
		printf("Unde-flow Condition");
		
	}
	else{
		printf("The top element is = %d", stack[top]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("underflow condition");
	}
	else{
		printf("The elements of stack are -: ");
		for(i=top;i>=0;i--)
		{
			printf("%d, ", stack[i]);
		}
	}
}

void main()
{
	int choice;
	do{
		
	
	printf("\nEnter 1 for push, 2 for pop, 3 for peek, 4 for display = ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:push();
		break;
		case 2:pop();
		break;
		case 3:peek();
		break;
		case 4:display();
		break;
		default:printf("Invalid choice");
		break;
	}
}while(choice!=0);
}
