#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
int stack[10];
int top=-1;
void main()
{
	int choice;
	clrscr();
	do{
		printf("\n1.push \n2.pop \n3.display \n4.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		       case 4 :
				exit();
				break;
		       default:
				printf("Invalid choice");
				break;
		}
	}
	while(1);
	getch();
}
void push()
	{
	int value;
		if(top<=9)
		{
			printf("Enter the element to be inserted: ");
			scanf("%d",&value);
			top++;
			stack[top]=value;
		}
		else
		{
			printf("Stack Overflow");
		}
	}
void pop()
	{
	int value;
		if(top<=9)
		{
			value=stack[top];
			top--;
			printf("The poped element is : %d",value);
		}
		else
		{
			printf("Stack Underflow");
		}
	}

void display()
	{       int i,value;
		printf("The stack is : ");
		for(i=0;i<=top;i++)
		{
			printf("%d	",stack[i]);
		}
		return(0);
	}