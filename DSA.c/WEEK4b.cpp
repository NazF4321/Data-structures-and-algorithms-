#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 4
int queue_array[max];
int rear=-1;
int front=-1;
void Insert();
void Delete();
void Display();
main()
{
	int choice;
	while(1)
	{
		printf("1.Insert \n");
		printf("2.Delete \n");
		printf("3.Display \n");
		printf("4.Exit \n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:Insert();
		        break;
		    
		 case 2:Delete();
		        break;
		    
		 case 3:Display();
		        break;
		 case 4:break;
		 default:printf("invalid choice \n");	
		}	
	}
}
void Insert()
{
	int add_item;
	if(rear==max-1)
	printf("queue overflow \n");
	else
	{
	if(front==-1)
	front=0;
	printf("insert the elements in queue:");
	scanf("%d",&add_item);
	rear=rear+1;
	queue_array[rear]=add_item;		
	}
}
void Delete()
{
	if(front==-1||front>rear)
	{
		printf("queue underflow\n");
		return ;
	}
	else 
	{
		printf("deleted element is %d\n",queue_array[front]);
		front=front+1;
	}
}
void Display()
{
	int i;
	if(front==-1)
	printf("queue is empty\n");
	else
	{
		printf("queue is:\n");
		for(i=front;i<=rear;i++)
		printf("%d",queue_array[i]);
		printf("\n");
	}
}































