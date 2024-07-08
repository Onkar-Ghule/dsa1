#include<stdio.h>
#include"ds.h"

void main()
{
int x,ch,q=0;

void dsiniti();
int isdsempty();
void dspush();
void dspop();
void dspeek();
dsiniti();
do
{
printf("\n1.push\n 2.empty\n 3.pop \n 4.peek\n 5.exit");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
  printf("enter the value to push in stack");
  scanf("%d",&x);
  dspush(x);
  break;
case 2:
if(!isdsempty())
printf("stack not empty");
else
printf("stack empty");
break;
case 3:
if(isdsempty())
printf("stack empty");
else
dspop();
break;
case 4:
if(isdsempty())
printf("stack empty");
else
dspeek();
break;
case 5:
q=-1;
break;
}
}while(q!=-1);
}



