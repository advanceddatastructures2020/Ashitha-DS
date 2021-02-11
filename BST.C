#include<stdio.h>
#include<stdlib.h>
struct btnode
{
int value;
struct btnode *l;
struct btnode *r;
}*root=NULL,*temp=NULL,*t2,*t1;
void create();
void insert();
int flag=1;
void main()
{
int ch;
printf("\n OPERATIONS");
printf("\n 1.INSERT \n 2.EXIT\n");
while(1)
{
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:

insert();
break;
case 2:
exit(0);
default:
printf("wrong choice,please enter correct choice\n");
break;
}
}
}
void create()
{
int data;
printf("enter data of node to be inserted\n");
scanf("%d",&data);
temp=(struct btnode *)malloc(1*sizeof(struct btnode));
temp->value=data;
temp->l=temp->r=NULL;
}
void insert()
{
create();
if(root==NULL)
root=temp;
else
search(root);
}
