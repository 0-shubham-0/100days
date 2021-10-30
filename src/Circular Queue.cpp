#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int queue[5];
int front=-1;
int rear=-1;

void enqueue(int);
void dequeue();
void display();


int main()
{
	int ch;
	int n1;
	while(1)
	{
		
		printf("\n Queue Operation");
		printf("\n 1. Enqueue");
		printf("\n 2. Dequeue");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		
		printf("\n Enter choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter element to be enqueued: ");
				scanf("%d",&n1);
				enqueue(n1);
				break;
			}
			case 2:
			{
				dequeue();
				break;
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


//start of enqueue
void enqueue(int x)
{  
    if(front==-1 && rear==-1)   // condition to check queue is empty  
    {  
        front=0;  
        rear=0;  
        queue[rear]=x;  
    }  
    else if((rear+1)%5==front)  // condition to check queue is full  
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {  
        rear=(rear+1)%5;       // rear is incremented  
        queue[rear]=x;     // assigning a value to the queue at the rear position.  
    }  
}  //end of enqueue

//start of dequeue
void dequeue()
{  
    if((front==-1) && (rear==-1))  // condition to check queue is empty  
    {  
        printf("\nQueue is Empty");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued element is %d", queue[front]);  
   front=(front+1)%5;  
}  
}  //end of dequeue

//start of display
void display()
{  
    int i=front,a=0;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%5;
			a++;
			if (a==5) break;
        }  
    }  
}  //end of display
