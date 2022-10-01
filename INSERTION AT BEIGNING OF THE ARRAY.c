//ENTERING ELEMENT AT THE BEIGNING OF THE ARRAY:
#include<stdio.h>
int main()
{
	int num, i, size;
	int a[40];
	printf("enter size of the arrayy = ");
	scanf("%d", &size);
	if(size>40)
	{
		printf("overflow condition ");
		
	}
	
else
printf("ennter elements of array = ");
for(i=0;i<size;i++)
{
	scanf("%d", &a[i]);
}
printf("enter number to be inserted = ");
scanf("%d", &num);
//TO INSERT THE NUMBER AT THE BEIGNING:
for(i=size-1;i>=0;i--)
{
	a[i+1]=a[i];
	
}
a[0]=num;
size++;
	for(i=0;i<size;i++)
	{
		printf("%d ", a[i]);
	}

}
