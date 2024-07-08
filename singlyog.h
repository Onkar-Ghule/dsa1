#include<stdio.h>
#include<malloc.h>
struct node
{
int data ;
struct node *next;
};
struct node *create(struct node *head)
{
int i,n,x;
struct node *ptr=NULL,*nw=NULL;
printf("\n enter the no of values");
scanf("%d",&n);
printf("enter the actual value");
for(i=0;i<n;i++)
{
nw=(struct node *)malloc(sizeof(struct node));
scanf("%d",&x);
nw->data=x;
nw->next=NULL;
if(head==NULL)
ptr=head=nw;
else
{
ptr->next=nw;
ptr=ptr->next;
}
}
return (head);
}
void display(struct node *head)
{
struct node *ptr=NULL;
ptr=head;
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
}
struct node *insert(struct node * head)
{
int x,pos,cnt=1;
struct node *ptr=NULL,*nw=NULL;
ptr=head;
printf("enter the position");
scanf("%d",&pos);
printf("enter the actual value");
scanf("%d",&x);
nw=(struct node *)malloc(sizeof(struct node));
nw->data=x;
nw->next=NULL;
if(pos==1)
{
nw->next=head;
head=nw;
}
else
{
ptr=head;
while((cnt!=pos-1))
{
ptr=ptr->next;
cnt++;
}
if(ptr!=NULL)
{
nw->next=ptr->next;
ptr->next=nw;
}
else 
printf("value is out of order");
}
return (head);
}
struct node *delete(struct node *head)
{
struct node *temp=NULL,*ptr=NULL;
ptr=head;
int pos ,cnt=1;
printf("enter the pos");
scanf("%d",&pos);
if(pos==1)
{
temp=head;
printf("deleted value is %d",temp->data);
head=head->next;
free(temp);
}
else
{
ptr=head;
while((cnt!=pos-1))
{
ptr=ptr->next;
cnt++;
}
if(ptr->next!=NULL)
{
temp=ptr->next;
ptr->next=temp->next;
printf("deleted value is %d",temp->data);
free(temp);
}
else 
printf("value is out of order");
}
return(head);
}
void count(struct node *head)
{
struct node *ptr=NULL;
int cnt=0;
ptr=head;
while(ptr!=NULL)
{
cnt++;
ptr=ptr->next;
}
printf("%d",cnt);
}	
void search(struct node *head)
{
struct node *ptr=NULL;
int x,flag;
ptr=head;
printf("enter the value to be search");
scanf("%d",&x);
while(ptr!=NULL)
{
if(ptr->data==x)
{
flag=1;
break;
}
else
ptr=ptr->next;
}
if(flag==1)
printf("value is found");
else
printf("value is not found");
}
struct node *sort(struct node *head)
{
struct node *temp=NULL,*temp1=NULL;
int x;
for(temp=head;temp->next!=NULL;temp=temp->next)
{
for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
{
if(temp->data>temp1->data)
{
x=temp->data;
temp->data=temp1->data;
temp1->data=x;
}
}
}
return(head);
}  
struct node *reverse(struct node *head)
{
  struct node*t1=NULL,*t2=NULL,*t3=NULL;
    t1=head;
    if(t1==NULL)
    return 0;
    t2=t1->next;
    if(t2==NULL)
    return ;
    t3=t2->next;
    t1->next=NULL;
    while(t3!=NULL)
    {
    t2->next=t1;
    t1=t2;
    t2=t3;
    t3=t3->next;
    }
    t2->next=t1;
    head=t2;
    return (head);
    }	

