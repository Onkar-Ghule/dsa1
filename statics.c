#include<stdio.h>
#include"statics.h"
void main()
{
int ch,x,q;
struct stack sp;
ssinti(&sp);
do
{
printf("enter the choice");
printf("\n1.isfull\n2.isempty\n3.sspush\n4.sspop\n5.sspeek\n6.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:if(!ssisfull(&sp))
       printf("stack is not full");
        else
        printf("stack is full");
 break;
 case 2:if(!ssisempty(&sp))
       printf("stack is  not empty");
        else
        printf("stack is empty");
        break;
case 3:if(ssisfull(&sp))
       printf("stack is  full");
       else
       printf("enter the value topush");
       scanf("%d",&x);
       sspush(&sp,x);
       break;
case 4:if(ssisempty(&sp))
       printf("stack is empty");
       else
       {
       x=sspop(&sp);
       printf("poped element is %d\n",x);
       }
       break;
case 5:if(ssisempty(&sp))
       printf("stackis empty");
       else
       {
       x=sspeek(&sp);
       printf("peeked element is %d\n",x);
       } 
       break;       
  case 6:q=-1;
  }
  }while(q!=-1);
  }
