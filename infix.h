#include<stdio.h>
#define size 10
struct stack
{
char item[size];
int top;
};
void ssinti(struct stack *sp)
{
sp->top=-1;
}
void sspush(struct stack *sp,char x)
{
++sp->top;
sp->item[sp->top]=x;
}
char sspop(struct stack *sp)
{
char x;
x=sp->item[sp->top];
sp->top--;
return x;
}
int ssisempty(struct stack*sp)
{
int t;
if(sp->top==-1)
t=1;
else 
t=0;
return t;
}

