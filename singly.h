#include<stdio.h>
#include<malloc.h>
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
for(i=0;i<n;i++)
{
printf("enter the value");
scanf("%d",&x);
nw=(struct node*)malloc(sizeof(struct node));
nw->data=x;
nw->next=NULL;
if(head==NULL)
head=ptr=nw;
else
{
ptr->next=nw;
ptr=ptr->next;
}
}
return(head);
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
nw->next=head;
head=nw;
}
else
{
ptr=head;
while(cnt!=pos-1)
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
{
printf("postion out of order");
free(nw);
}
}
return (head);
}

struct node *delete(struct node *head)
{
struct node *temp=NULL,*ptr=NULL;
ptr=head;
int pos,cnt=1;
printf("enter the posotion to delete the value");
scanf("%d",&pos);
if(pos==1)
{
temp=head;
head=head->next;
printf("the deleted value is %d",temp->data);
free(temp);
}
else
{
ptr=head;
while(cnt!=pos-1)
{
ptr=ptr->next;
cnt++;	
}
if(ptr!=NULL)
{
temp=ptr->next;
ptr->next=temp->next;
printf("the deleted value is %d",temp->data);
free(temp);
}
else
printf("postion out of order");
}
return (head);
}
void count(struct node *head)
{
int cnt=0;
struct node *ptr=NULL;
ptr=head;
while(ptr!=NULL)
{
cnt++;
ptr=ptr->next;
}
printf("count is %d",cnt);
}
void search(struct node *head)
{
struct node *ptr=NULL;
int key,flag;
printf("enter the value to search");
scanf("%d",&key);
ptr=head;
while(ptr!=NULL)
{
if(key==ptr->data)
{
flag=1;
break;
}
else 
ptr=ptr->next;
}
if(flag==1)
printf("found");
else
printf("not found");
}
struct node *sort(struct node *head)
{
int x;
struct node *temp=NULL,*temp1=NULL;
for(temp=head;temp->next!=NULL;temp=temp->next)
{
for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
{
if(temp->data>=temp1->data)
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
struct node *t1=NULL,*t2=NULL,*t3=NULL;
t1=head;
if(t1==NULL)
return 0;
t2=t1->next;
if(t2==NULL)
return;
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
