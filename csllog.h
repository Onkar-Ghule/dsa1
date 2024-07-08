#include<stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *create(struct node *head)
{
int i,n,x;
struct node *nw=NULL,*ptr=NULL;
printf("enter the no of values");
scanf("%d",&n);
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",&x);
nw=(struct node*)malloc(sizeof(struct node));
nw->data=x;
nw->next=NULL;
if(head==NULL)
{
head=ptr=nw;
head->next=head;
}
else
{
ptr->next=nw;
ptr=ptr->next;
ptr->next=head;
}
}
return(head);
}
void display(struct node *head)
{
struct node *ptr=NULL;
ptr=head;
do
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}while(ptr!=head);
}
struct node *insert(struct node *head)
{
struct node *nw=NULL,*ptr=NULL;
ptr=head;
int pos,cnt=1;
printf("enter the posotion to insert he value");
scanf("%d",&pos);
nw=(struct node *)malloc(sizeof(struct node));
printf("enter the actual value");
scanf("%d",&nw->data);
nw->next=NULL;
if(pos==1)
{
ptr=head;
do
{
ptr=ptr->next;
}while(ptr->next!=head);
nw->next=head;
head=nw;
ptr->next=head;
}
else
{
ptr=head;
while((cnt!=pos-1)&&(ptr->next!=head))
{
ptr=ptr->next;
cnt++;	
}
if(cnt==pos-1)
{
nw->next=ptr->next;
ptr->next=nw;
}
else
{
printf("postion out of order");
free(nw);
}
}
return (head);
}
struct node *delete(struct node *head)
{
struct node *ptr=NULL,*temp=NULL;
int pos,cnt=1;
printf("enter the postion to delete value");
scanf("%d",&pos); 
ptr=head;
if(pos==1)	
{
temp=head;
while(ptr->next!=head)
{
ptr=ptr->next;
}
head=head->next;
ptr->next=head;
printf("the deleted value is %d",temp->data);
free(temp);
}
else
{
ptr=head;
while((cnt!=pos-1)&&(ptr->next!=head))
{
ptr=ptr->next;
cnt++;
}
if(cnt==pos-1)
{
temp=ptr->next;
printf("the deleted value is %d",temp->data);
ptr->next=temp->next;
free(temp);
}
else
printf("pos out of order");
}
return(head);
}
