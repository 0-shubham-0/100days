#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top=-1;

void push(int);
void pop();
void display();


int main()
{
	int ch;
	int n1;
	while(1)
	{
		
		printf("\n Stack Operation");
		printf("\n 1. Push");
		printf("\n 2. pop");
		printf("\n 3. display");
		printf("\n 4. Exit");
		
		printf("\n Enter choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter element to be pushed into the stack: ");
				scanf("%d",&n1);
				push(n1);
				break;
			}
			case 2:
			{
				pop();
			}
			case 3:
			{	display();
				break;
			}
			case 4:
			{	exit(1);
				break;
			}
			default:
			{
				printf("invalid input");
				break;
			}
		}//end of switch
	}//end of while
}//end of main

//push method
void push(int x)
{
	if(top==4)
	{
		printf("\nStack is full");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}//end of push

//start of pop
void pop()
{
	if(top==-1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		printf("\n %d Element is popped",stack[top--]);
	}
}//end of pop

//start of display
void display()
{
	if(top==-1)
	{
		printf("Stack is Empty");
	}
	else
	{
		printf("Stack Elements are :\n");
		for(int i=top;i>=0;i--)
		printf("%d",stack[i]);
	}
}

