#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("\n enter the size of stack:");
	scanf("%d",&n);
	do
	{
		printf("\n\t STACK OPEARATIONS USING ARRAYS");
		printf("\n\t                     ");
		printf("\n\t 1.PUSH \n\t 2.POP \n\t 3.DISPLAY \n\t 4.EXIT");
		printf("\n enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:
				printf("\n\t EXIT POINT ");
				break;
			default:
			    printf("\n\t Please enter a valid choice(1/2/3/4)");	
		}
	}while(choice!=4);
return 0;	
}
void push()
{
	if(top>=n-1)
	printf("\n\t Stack is overflow");
	else
	{
		printf("enter a value to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}	
}
void pop()
{
	if(top<=-1)
	{
		printf("\n\t Stack is underflow");
    }  
	else 
	{
			printf("\n\t The popped elements is %d",stack[top]);
			top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n the elements in stack \n");
		for(i=top;i>=0;i--)
		printf("\n %d",stack[i]);
    }
}


















