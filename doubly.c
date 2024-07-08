#include<stdio.h>
#include"doubly.h"
void main()
{

int ch,q=0;
struct node *head=NULL;
do
{
printf("\n enter ur choice");
printf("\n1.create\n2.display\n3.insert\n4.delete\n 5.count\n6.search\n7.sort \n 8.reveres\n9 exit");
scanf("%d",&ch);
switch(ch)
{
case 1: head=create(head);
break;
case 2:display(head);
break;
case 3:head=insert(head);
break;
case 4:
head=delete(head);
break;
case 9: q=1;
}
}while(q==0);
}
