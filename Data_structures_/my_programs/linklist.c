#include <stdio.h>
#include <stdlib.h>
struct node
	{
	int data;
	struct node *link;
	};
struct node *start = 0;
void createlist(int num)
	{
	struct node *newnode, *temp;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = num;
	newnode -> link = 0;
	if(start == 0)
		{
		start = temp = newnode;
		}
	else
		{
		temp -> link = newnode;
		temp = temp -> link;
		}
	}
int main()
	{
	int num;
	createlist(10);
	createlist(20);
	createlist(30);
	createlist(40);
	int i= 0;
	struct node * temp = start;

	printf("The memory address at start is %p\n", start);

		do{
		printf("The data at node%d is : %d\n", i+1, temp -> data);
		printf("The memory address at node%d is : %p\n", i+1, temp -> link);
		temp = temp -> link;
		i ++;
		}while(temp -> link != 0);

	return 0;
	}
















