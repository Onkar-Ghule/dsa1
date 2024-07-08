#include<stdio.h>
#include"statics.h"
int palindrome(int a[],int n);
void main()
{
int a[10],i,n,flag;
printf("how many array element");
scanf("%d",&n);
printf("enter actual array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
flag=palindrome(a,n);
if(flag==0)
printf("not palindrome");
else 
printf("palindrme");
}
int palindrome(int a[],int n)
{
int i;
struct stack sp;
ssinti(&sp);
for(i=0;i<n;i++)
sspush(&sp,a[i]);
i=0;
while(!ssisempty(&sp))
{
if(a[i]!=sspop(&sp))
return 0;
i++;
}
return 1;
}
