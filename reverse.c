#include<stdio.h>
#include"statics.h"
void main()
{
int a[10],i,n;
printf("how many array element");
scanf("%d",&n);
printf("enter actual array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
reverse(a,n);
printf("reverse array element ");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
void reverse(int a[],int n)
{
int i;
struct stack sp;
ssinti(&sp);
for(i=0;i<n;i++)
{
sspush(&sp,a[i]);
}
i=0;
while(!ssisempty(&sp))
{
a[i]=sspop(&sp);
i++;
}
}
