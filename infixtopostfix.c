#include<stdio.h>
#include"infix.h"
int priority(char c);
char sttop(struct stack *sp);
void postfixconv(char infix[], char postfix[]);
void main()
{
char infix[10],postfix[10];
int i,n,c;
printf("how many data element");
scanf("%d",&n);
printf("enter the data");
for(i=0;i<n;i++)
{
scanf(" %c",&infix[i]);
}
printf("infix expression\n");
for(i=0;i<n;i++)
{
printf("%c",infix[i]);
}
postfixconv(infix,postfix);
printf("postfix expression\n");
for(i=0;postfix[i]!='\0';i++)
{
printf("%c",postfix[i]);
}
}
void postfixconv(char infix[],char postfix[])
{
int i,x,c,j=0;
struct stack sp;
ssinti(&sp);
for(i=0;infix[i]!='\0';i++)
{
if(infix[i]=='(')
{
sspush(&sp,infix[i]);
}
else if(infix[i]=='*'||infix[i]=='+'||infix[i]=='/'||infix[i]=='-'||infix[i]=='^')
{
if(ssisempty(&sp))
{
sspush(&sp,infix[i]);
}
else
{
while (!ssisempty(&sp) && priority(sttop(&sp)) >= priority(infix[i]))
{
postfix[j]=sspop(&sp);
j++;
}
sspush(&sp,infix[i]);
}
}
else if(infix[i]==')')
{
while((!ssisempty(&sp))&&(c=sspop(&sp)!='('))
{
postfix[j]=c;
j++;
}
sspop(&sp);
}
else
{
postfix[j]=infix[i];
j++;
}
}
while(!ssisempty(&sp))
{
postfix[j]=sspop(&sp);
j++;
}
postfix[j]='\0';
}
char sttop(struct stack *sp)
{ char x;
    x= sp->item[sp->top];
     return x;
}

int priority(char c)
{
int m;
if(c=='(')
m=0;
else if(c=='+'||c=='-')
m=1;
else if(c=='*'||c=='/')
m=2;
else if(c=='^')
m=3;
else
m=0;
return m;
}
