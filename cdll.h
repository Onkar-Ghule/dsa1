#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next,*prev;
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
nw->next=nw->prev=NULL;
if(head==NULL)
{
head=ptr=nw;
head->next=head;
head->prev=head;
}
else
{
ptr->next=nw;
nw->prev=ptr;
ptr=nw;
ptr->next=head;
head->prev=ptr;
}
}
return(head);
}
void display(struct node *head)
{
struct node *ptr=NULL,*ptr1=NULL;
ptr=head;
do
{
printf("%d\t",ptr->data);
ptr1=ptr;
ptr=ptr->next;
}while(ptr!=head);
printf("\n");
do
{
printf("%d\t",ptr1->data);
ptr1=ptr1->prev;
}while(ptr1->next!=head);
}
struct node *insert(struct node *head)
{
struct node *nw=NULL,*ptr=NULL,*ptr1=NULL;
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
head->prev=nw;
head=nw;
head->prev=ptr;
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
ptr1=ptr->next;
nw->prev=ptr;
ptr->next=nw;
nw->next=ptr1;
ptr1->prev=nw;
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
struct node *temp=NULL,*ptr=NULL,*ptr1;
ptr=head;
int pos,cnt=1;
printf("enter the posotion to delete the value");
scanf("%d",&pos);
if(pos==1)
{
ptr=head;
do
{
ptr=ptr->next;
}while(ptr->next!=head);
temp=head;
head=head->next;
head->prev=ptr;
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
ptr1=temp->next;
ptr->next=temp->next;
ptr1->prev=ptr;
printf("the deleted value is %d",temp->data);
free(temp);
}
else
printf("postion out of order");
}
return (head);
}
