//Tower of Hanoi using Recursion:-

#include<stdio.h>
#include<stdlib.h>
 void towerofhanoi(int, char, char, char);
 
 int main()
 {
 	int d;
 	printf("Enter number of Disks = ");
 	scanf("%d", &d);
 	printf("\n");
 	towerofhanoi(d, 'A', 'B', 'C');
 	return 0;
 }
 void towerofhanoi(int d, char beg, char aux, char end)
 {
 	if(d>=1)
 	{
 		towerofhanoi(d-1, beg, aux, end);
 		printf("%d Disk move from %c to %c\n", d, beg, end);
 		towerofhanoi(d-1, aux, beg, end);
	 }
 	
 }
