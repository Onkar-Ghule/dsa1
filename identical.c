#include<stdio.h>
#include"statics.h"
int isidentical();
void main()
{
int flag;
flag=isidentical();
if(flag==0)
printf("not identical");
else 
printf("identical");
}
int isidentical()
{
struct stack sp,sp1;
int i=0,a[10],b[10],x,n,c;
ssinti(&sp);
ssinti(&sp1);
printf("how many stack element");
scanf("%d",&n);
printf("enter actual 1st stack element");
for(i=0;i<n;i++)
{
scanf("%d",&x);
sspush(&sp,x);
}printf("enter actual 2nd stack element");
for(i=0;i<n;i++)
{
scanf("%d",&x);
sspush(&sp1,x);
}
i=0;
while(!ssisempty(&sp))
{
a[i]=sspop(&sp);
i++;
}
i=0;
while(!ssisempty(&sp1))
{
b[i]=sspop(&sp1);
i++;
}
for(i=0;i<n;i++)
{
if(a[i]!=b[i])
return 0;
}
return 1;
}
