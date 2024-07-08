#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void dsiniti()
{
top=NULL;
}
void dspush(int x)
{
struct node *nw=NULL;
nw=(struct node *)malloc(sizeof(struct node));
nw->data=x;
if(top==NULL)
top=nw;
else
{
nw->next=top;
top=nw;
}
}
void dspop()
{
struct node *temp=NULL;
temp=top;
top=top->next;
printf("poped element id %d",temp->data);
free(temp);
}
int isdsempty()
{
int t;
if(top==NULL)
t=1;
else
t=0;
return t;
}
void dspeek()
{
printf("peeked element id %d",top->data);
}
