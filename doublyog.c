#include<stdio.h>
#include"doublyog.h"
void main()
{
struct node *head=NULL;
struct node *create();
void display();
struct node *insert();
struct node *deletee();
int q=0,ch;
do
{
printf("\n1.create\n2.display\n3.insert\n4.delete\n5.count \n 6.search\n7.sort\n8.reverse\n10.exit");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:head=create(head);
break;
case 2:display(head);
break;
case 3:head=insert(head);
break;
case 4:head=delete(head);
break;
case 10:q=-1;
break;
}
}while(q!=-1);
}
