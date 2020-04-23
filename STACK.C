#include<stdio.h>
#include<conio.h>
struct Node
{
	int data;
	struct Node *next;
}*top=NULL;
void push(int value)
{
	struct Node *newnode;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	newnode->data=value;
	if(top==NULL)
	{
		newnode->next=NULL;
	}
	else
	{
		newnode->next=top;
	}
	top=newnode;
	printf("\nInsertion is Success !!!\n");
}
void pop()
{
	if(top==NULL)
	{
		printf("\nStack is Empty !!!\n");
	}
	else
	{
		struct Node *temp=top;
		printf("\nDeleted element : %d ",temp->data);
		top=temp->next;
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	{
		printf("\nStack is Empty !!!\n");
	}
	else
	{
		struct Node *temp=top;
		while(temp->next!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("%d->Null",temp->data);
	}
}
int main()
{
int choice,value;
clrscr();
printf("\n :: Stack Using Linked List  ::\n");
do
{
printf("\n1.Pop \n2.Push \n3.Display \n4.exit \n");
printf("Enter the choice : ");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("Enter the value ");
		scanf("%d",&value);
		push(value);
		break;
	case 2:pop();
		break;
	case 3:display();
		break;
	case 4:exit();
		break;
	default:
		printf("Invalid choice");
		break;
}
}while(1);
getch();
}