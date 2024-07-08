#include<stdio.h>
#include<malloc.h>
struct node
{
int coeff,expo;
struct node *next;
};
struct node *create(struct node *head)
{
int i,n;
struct node *nw=NULL,*ptr=NULL;
printf("enter the no of values");
scanf("%d",&n);
printf("enter the polynomial in decending order of their expo\n");
for(i=0;i<n;i++)
{
nw=(struct node*)malloc(sizeof(struct node));
printf("enter the coeff");
scanf("%d",&nw->coeff);
printf("enter expo");
scanf("%d",&nw->expo);
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
printf("%dx^%d+",ptr->coeff,ptr->expo);
ptr=ptr->next;
}
}
struct node *multiply(struct node *head1,struct node *head2,struct node *head3)
{
struct node *t1=NULL,*t2=NULL,*t3=NULL,*nw=NULL;
t1=head1;
t2=head2;
t3=head3;
while(t1!=NULL)
{
while(t2!=NULL)
{
nw=(struct node*)malloc(sizeof(struct node));
nw->coeff=t2->coeff*t1->coeff;
nw->expo=t2->expo+t1->expo;
 if(head3==NULL)
 t3=head3=nw;
 else
 {
 t3->next=nw;
 t3=t3->next;
 }
 t2=t2->next;
 }
 t2=head2;
 t1=t1->next;
 }
 return(head3);
 }
 
