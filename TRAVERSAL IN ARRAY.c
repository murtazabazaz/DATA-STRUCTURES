#include<stdio.h>
int main()
{
	int i, size;
	int a[40];
	
	printf("Enter the Size of the Array = ");
	scanf("%d", &size);
	
	if(size>40)
	{
	printf("Over-Flow Case!!!");
	}
	else
	printf("Enter Elements of Array = ");
	
	for(i=0;i<size;i++)
	{
		scanf("%d", &a[i]);
	}
	//NOW FOR TRAVERSAL OF ARRAY:
	for(i=0;i<=size-1;i++)
	{
		printf("%d, ", a[i]);
	}
}

