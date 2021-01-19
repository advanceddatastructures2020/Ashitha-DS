#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
struct node *prev;
struct node *next;
int data;
};
struct node *head;
void insertion_beginning();
void insertion_last();
void insertion_specified();
void display();
void main()
{
int choice=0;
clrscr();
while(choice!=5)
{
printf("main menu \n");
printf("choose one function \n");
printf("\n insert in beginning \n 2.insert at last \n 3.insert at any random location \n 4.show \n 5.exit \n");
printf("enter your choice \n");
scanf("\n %d",&choice);
switch(choice)
{
case 1:
insertion_beginning();
break;
case 2:
insertion_last();
break;
case 3:
insertion_specified();
break;
case 4:
display();
break;
case 5:
exit(0);
break;
default:
printf("wrong choice \n");
}
}
getch();
}
void insertion_beginning()
{
struct node *ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr== NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter item value");
scanf("%d",&item);
if(head==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
ptr->data=item;
head=ptr;
}
else
{
ptr->data=item;
ptr->prev=NULL;
ptr->next=head;
head->prev=ptr;
head=ptr;
}
printf("\n node inserted \n");
}
}
void insertion_last()
{
struct node *ptr,*temp;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter value");
scanf("%d",&item);
ptr->data=item;
if(head==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
head=ptr;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->prev=temp;
ptr->next=NULL;
}
}
printf("\n node inserted \n");
}
void insertion_specified()
{
struct node *ptr,*temp;
int item,loc,i;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
temp=head;
printf("enter the location");
scanf("%d", &loc);
for(i=0;i<loc;i++)
{
temp=temp->next;
if(temp==NULL)
{
printf("\n there are less than %d elements",loc);
return;
}
}
printf("\n enter value");
scanf("%d",&item);
ptr->data=item;
ptr->next=temp->next;
ptr->prev=temp;
temp->next=ptr;
temp->next->prev=ptr;
printf("\n node inserted \n");
}
}
void display()
{
struct node*ptr;
printf("\n printing values....\n");
ptr=head;
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}

