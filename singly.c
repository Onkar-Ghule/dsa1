#include<stdio.h>
#include"singly.h"
void main()
{
struct node *head=NULL;
struct node *create();
void display();
struct node *insert();
struct node *delete();
struct node *sort();
struct node *reverse();
void count();
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
case 5:count(head);
break;
case 10:q=-1;
break;
case 6:search(head);
break;
case 7:head=sort(head);
break;
case 8:head=reverse(head);
break;
}
}while(q!=-1);
}
