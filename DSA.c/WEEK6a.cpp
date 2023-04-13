#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define size 100
char stack[size];
int top=-1;
void push(char item)
{
	if(top>=size-1)
	{
		printf("\n stack overflow");
	}
	else
	{
		top=top+1;
		stack[top]=item;
	}
}
char pop()
{
	char vitem;
	if(top<0)
	{
		printf("stack underflow:invalid infix expression");
		getchar();
		exit(1);
	}
	else
	{
		item=stack[top];
		top=top-1;
		return(item);
	}
}
int is_operator(char symbol)
{
	if(symbol=='^'|| symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
	{
		retrun 1;
	}
	else
	{
		return 0;
	}
}
int precedence(char symbol)
{
	if(symbol=='^')
	{
		retrun(3);
	}
	else if(symbol=='*'||symbol=='/')
	{
		retrun(2);
	}
	else if(symbol=='+'||symbol=='-')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void InfixToPostfix(char infix_exp[],char postfix_exp[])
{
	int i,j;
	char item;
	char x;
	push('(');
	strcat(infix_exp,")");
	i=0;
	j=0;
	item=infix_exp[i];
	while(item!='\o')
	{
		if(item=='(')
		{
			push(item);
		}
		else if(is digit(item)||is alpha(item))
		{
			postfix_exp[j]=item;
			j++;
			else(is_opearator(item)==1)
			{
				k=pop();
				while(is_opearator(k)==1 &&precedence(x)>=precedence(item))
				{
					postfix_exp[j]=x;
					j++;
					x=pop();
				}
			}
		}
	}
}























