#include<stdio.h>
int main()
{
	int i, size, num, pos;
	int a[40];
	printf("Enter Size of Array = ");
	scanf("%d", &size);
	
	if(size>40)
	{
		printf("OVERFLOW CASE");
	}
	else
	printf("Enter Elements of Array = ");
	for(i=0;i<size;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter element you want to insert = ");
	scanf("%d", &num);
	
	printf("Enter position of the element to be inserted = ");
	scanf("%d", &pos);
	
	//CODE FOR INSERTIMG THE ELEMENT IN THE MIDDLE OF THE ARRAY:
	if(pos<=0 || pos>size+1)
	{
		printf("Invalid position ");
	}
	else
	{
		for(i=size-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	size++;
	//NOW PRINTING THE UPDATED ARRAY:
    printf("The Updated array is : ");
	for(i=0;i<size;i++)
	{
		printf("%d ", a[i]);
	}
}
}
