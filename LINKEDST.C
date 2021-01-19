#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
#define CAPACITY 10000
struct stack
{
int data;
struct stack *next;
}
*top;
//stack size
int size=0;
void push(int element);
int pop();
void main()
{
int choice,data;
clrscr();
while(1)
{
printf("____________________\n");
printf("STACK IMPLIMENTATION PROGRAM \n");
printf("____________________\n");
printf("1.push \n");
printf("2.pop \n");
printf("3.size \n");
printf("4.exit \n");
printf("____________________\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter data to push into stack:");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
if(data!=INT_MIN)
printf("Data!=>%d \n",data);
break;
case 3:
printf("stack size:%d \n",size);
break;
case 4:
printf("exiting from app \n");
exit(0);
break;
default:
printf("invalid choice please try again \n");
}
printf("\n\n");
getch();
}
}
void push(int element)
{
struct stack*newNode;
if(size>=CAPACITY)
{
printf("stack overflow,cant add more element to stack \n");
return;
}
newNode=(struct stack*)
malloc(sizeof(struct stack));
newNode->data=element;
newNode->next=top;
top=newNode;
size++;
printf("data pushed to stack \n");
}
int pop()
{
int data=0;
struct stack*topNode;
if(size<=0||!top)
{
printf("stack is empty \n");
return INT_MIN;
}
topNode=top;
data=top->data;
top=top->next;
free(topNode);
size--;
return data;
}
