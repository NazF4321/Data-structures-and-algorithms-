#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push(int);
void pop();
void display();
main()
{
	int choice,value;
	printf("\n stack using linked list\n");
	while(1)
	{
		printf("\n ***MENU*** \n");
		printf("1.push \n 2.pop \n 3.display \n 4.exit \n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the value to be inserted:");
			       scanf("%d",&value);
			       push(value);
			       break;
			case 2:pop();
			       break;
            case 3:display();
			       break;		
			case 4:break;
			default:printf("\n wrong selection!! please try agaion!! \n");
		}
	}
}
void push(int value)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=value;
	newNode->next=NULL;
	if(top==NULL)
	top=newNode;
	else
	newNode->next=top;
	top=newNode;
	printf("\n insertion is success! \n");	
}
void pop()
{
	if(top==NULL)
	printf("\n stack is empty!! \n");
	else
	{
		struct node*temp=top;
		printf("\n delted element :%d",temp->data);
		top=temp->next;
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	printf("\n stack is empty!! \n");
	else
	
	{
		struct node*temp=top;
		while(temp->next != NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
}











