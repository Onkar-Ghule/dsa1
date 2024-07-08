#include<stdio.h>
#include"statics.h"
void main()
{
int i,a[10],c;
struct stack sp1;
struct stack sp2;
ssinti(&sp1);
ssinti(&sp2);
sspush(&sp1,10);
sspush(&sp1,11);
sspush(&sp1,12);
for(i=0;!ssisempty(&sp1);i++)
{
a[i]=sspop(&sp1);
}
c=i-1;
for(i=c;i>=0;i--)
{
sspush(&sp2,a[i])	;
printf("copied element is %d",sspeek(&sp2));
}
}


