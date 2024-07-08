#include<stdio.h>
#include<malloc.h>
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
for(i=0;i<n;i++)
{
printf("enter the value");
scanf("%d",&x);
nw=(struct node*)malloc(sizeof(struct node));
nw->data=x;
nw->next=NULL;nw->prev=NULL;
if(head==NULL)
{
head=ptr=nw;
head->prev=NULL;
}
else
{
ptr->next=nw;
nw->prev=ptr;
ptr=ptr->next;
}
}
return(head);
}
void display(struct node *head)
{
struct node *ptr=NULL,*q=NULL;
ptr=head;
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
q=ptr;
ptr=ptr->next;
}
printf("\n");
while(q!=NULL)
{
printf("%d\t",q->data);
q=q->prev;
}
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
nw->prev=NULL;
nw->next=NULL;
if(pos==1)
{
nw->next=head;
head->prev=nw;
head=nw;
}
else
{
ptr=head;
while((cnt!=pos-1)&&(ptr!=NULL))
{
ptr=ptr->next;
cnt++;	
}
if(ptr!=NULL)
{
ptr1=ptr->next;
nw->next=ptr1;
ptr1->prev=nw;
ptr->next=nw;
nw->prev=ptr;
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
struct node *temp=NULL,*ptr=NULL,*ptr1=NULL;
ptr=head;
int pos,cnt=1;
printf("enter the posotion to delete the value");
scanf("%d",&pos);
if(pos==1)
{
temp=head;
head=head->next;
head->prev=NULL;
printf("the deleted value is %d",temp->data);
free(temp);
}
else
{
ptr=head;
while((cnt!=pos-1)&&(ptr!=NULL))
{
ptr=ptr->next;
cnt++;	
}
if(ptr!=NULL)
{
temp=ptr->next;
ptr1=temp->next;
ptr->next=ptr1;
ptr1->prev=ptr;
printf("the deleted value is %d",temp->data);
free(temp);
}
else
printf("postion out of order");
}
return (head);
}
