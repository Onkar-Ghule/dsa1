#include<stdio.h>
#include<ctype.h>
#include"infix.h"
void postfixeval(char postfix[]);
void main()
{
char postfix[10];
int i,n;
printf("how many data element");
scanf("%d",&n);
printf("enter the data");
for(i=0;i<n;i++)
{
scanf(" %c",&postfix[i]);
}
postfixeval(postfix);
}
void postfixeval(char postfix[])
{
int i,od1,od2,val,output;
struct stack sp;
for(i=0;postfix[i]!='\0';i++)
{
if(isalpha(postfix[i]))
{
printf("enter the value for %c",postfix[i]);
scanf("%d",&val);
sspush(&sp,val);
}
else
{
od2=sspop(&sp);
od1=sspop(&sp);
if(postfix[i]=='*')
{
output=od1*od2;
}
else
if(postfix[i]=='/')
{
output=od1/od2;
}
else
if(postfix[i]=='-')
{
output=od1-od2;
}
else
if(postfix[i]=='+')
{
output=od1+od2;
}
else
{
output=od1^od2;
}
sspush(&sp,output);
}
}
output=sspop(&sp);
printf("postfix evaluation is %d",output);
}
