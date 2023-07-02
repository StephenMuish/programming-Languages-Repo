#include <stdio.h>
#include <stdlib.h>
#define N 5

int queue[N];
int rear = -1; //tail for addition of elements
int front = -1; //head for removal of elements


//enqueue function.
void enqueue()
	{
	int num;
	if (rear == -1 && front == -1 )
		{
		front=rear=0;
		printf("\nEnter the element to enqueue\nElements : ");
	    scanf("%d", &num);
	    queue[rear]=num;
	    printf("ADDITION SUCCESSIFULL\n");
		}
	else if(rear == N-1)
		{
		printf("\n\n!! ERROR QUEUE OVERFLOW\n");
		}
	else
		{
		printf("\nEnter the element to enqueue\nElements : ");
   		scanf("%d", &num);
		rear++;
		queue[rear]=num;
		printf("ADDITION SUCCESSIFULL\n");
		
		}
	}
//DEQUEUE FUNCTION.
void dequeue()
	{
	
	int num;
	
	if(front == -1)
		{
		printf("ERROR QUEUE UNDERFLOW\n");
		}
	else if(rear == front)
		{
		num = queue[front];
		rear=front=-1;
		printf("\n\nYou have succefully removed %d from the queue\n", num);
		}
	else
		{
		num = queue[front];
		front++;
		printf("You have succefully remove %d from the queue\n", num);
		}
	}

//The main function.
int main()
	{
	int choice;
	
	while(1==1)
		{
		printf("\n\n\t\tMENU\n");
		printf("What would you like to do?\n");
		printf("1. ENQUEUE\n");
		printf("2. DENQUEUE\n");
		printf("3. EXIT\n\n");
		printf("\nChoice : ");
		scanf("%d", &choice);
		
		switch(choice)
			{
			case 1 :
				enqueue();
				break;
			case 2 : 
				dequeue();
				break;
			case 3 : 
				exit(0);
			default : 
				printf("\n\nINVALID!!Try Again!!\n\n\n");
			}
		}
	return 0;
	}























