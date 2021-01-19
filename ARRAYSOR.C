#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,n,number[30];
clrscr();
printf("enter size \n");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
scanf("%d",&number[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(number[i]>number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("the number arranged in ascending order is \n");
for(i=0;i<n;i++)
printf("%d \n",number[i]);
getch();
}
