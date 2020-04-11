/*Write a C program to solve the following problem: Suppose that a disk drive has 5,000
cylinders, numbered 0 to 4999. The drive is currently serving a request at cylinder143,
and the previous request was at cylinder 125. The queue of pending requests, in FIFO
order,is:
86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130
Starting from the current head position, what is the total distance (in cylinders)that the disk arm
moves to satisfy all the pending requests for each of the FCFS disk-scheduling algorithms?*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int h,i,n;
	printf("Enter the Head position (to the current position): ");
	scanf("%d", &h);
	
	printf("\nEnter the number of Requests: ");
	scanf("%d", &n);
	
	int req[n];
	printf("\nPending Requests: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&req[i]);
	}
	int d=req[0]-h;
	if(d<0)
	{
		d=d*-1;
	}
	for(i=1;i<n;i++)
	{
		if(req[i]-req[i-1]>0)
		d=d+(req[i]-req[i-1]);
		else
		d=d+(req[i-1]-req[i]);
	}
	printf("\nSeek time = %d\n",d);
	getch();
}
