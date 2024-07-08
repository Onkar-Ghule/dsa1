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
struct node *add(struct node *head1,struct node *head2,struct node *head3)
{
 struct node *nw=NULL,*t1=NULL,*t2=NULL,*t3=NULL;
 t1=head1;
 t2=head2;
 t3=head3;
 
 while((t1!=NULL)&&(t2!=NULL))
 {
 nw=(struct node*)malloc(sizeof(struct node));
 nw->next=NULL;
 if(t1->expo>t2->expo)
 {
 nw->coeff=t1->coeff;
 nw->expo=t1->expo;
 t1=t1->next;
 }
 else if(t2->expo>t1->expo)
 {
  nw->coeff=t2->coeff;
 nw->expo=t2->expo;
 t2=t2->next;
 }
 else
 {
  nw->coeff=t1->coeff+t2->coeff;
 nw->expo=t1->expo;
 t1=t1->next;
 t2=t2->next;
 }
 if(head3==NULL)
 t3=head3=nw;
 else
 {
 t3->next=nw;
 t3=t3->next;
 }
 }
 if(t1!=NULL)
 t3->next=t1;
 else if(t2!=NULL)
 t3->next=t2;
 return(head3);
 }
 
