#include<stdio.h>
#include"statics.h"
void main()
{
int a[10],i=0,x;
struct stack sp1;
struct stack sp2;
ssinti(&sp1);
ssinti(&sp2);
sspush(&sp1,10);
sspush(&sp1,11);
sspush(&sp1,12);
while(!ssisempty(&sp1))
a[++i]=sspop(&sp1);
while(i>0)
{
sspush(&sp2,a[i--]);
x=sspeek(&sp2);
printf("the element push in stack 2 is %d\n",x);
}
}
