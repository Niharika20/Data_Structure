//C program to count number of nodes in a linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node  //link list node
{
	int data;
	struct node* next;
};


void push(struct node** headref, int data)  //add a new node on the front of the list 
{
	struct node *newnode=(struct node* )malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*headref;
	*headref=newnode;
}

int count(struct node* head) //count number of nodes in linked list
{
	int count=0;
	struct node *current=head; //Initialize current
	while(current!=NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}

int main()
{
	struct node *head=NULL;
	
	push(&head,1);
	push(&head,4);
	push(&head,3);
	push(&head,6);
	
	printf("Number of nodes: %d", count(head));
	return 0;

}
