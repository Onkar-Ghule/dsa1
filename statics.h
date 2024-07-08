#include<stdio.h>
#define size 10
struct stack
{
int item[size];
int top;
};
void ssinti(struct stack *sp)
{
sp->top=-1;
}
void sspush(struct stack *sp,int x)
{
++sp->top;
sp->item[sp->top]=x;
}
int ssisfull(struct stack *sp)
{
int t;
if(sp->top==size-1)
t=1;
else 
t=0;
return t;
}
int sspop(struct stack *sp)
{
int x;
x=sp->item[sp->top];
sp->top--;
return x;
}
int sspeek(struct stack *sp)
{
int x;
x=sp->item[sp->top];
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

