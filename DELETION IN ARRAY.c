#include<stdio.h>
int main()
{
	int i, num, pos, size;
	int a[50];
	printf("Enter size of Array = ");
	scanf("%d", &size);
	
	if(size>50)
	{
		printf("OVERFLOW CASE!!");
		
	}
	else
	printf("Enter elements of the Array = ");
     
    for(i=0;i<size;i++)
    {
    	scanf("%d", &a[i]);
    	
	}
	
	
	
	printf("Enter position of the element = ");
	scanf("%d", &pos);
   if(pos>size || pos<0)
   {
   	printf("INVALID POSITION!! ENTER VALID POSITION VALUE ");
   	
	   }	
	else{
	
	num=a[pos-1];
	
	for(i=pos-1;i<=size-1;i++)
	{
		a[i]=a[i+1];
	}
  size--;

  
  
  printf("\n The array after deletion of element : ");
  
for(i=0;i<size;i++)
{
	printf("%d ", a[i]);
}
	printf("\n The element you deleted from the array was = %d", num);
}
}
