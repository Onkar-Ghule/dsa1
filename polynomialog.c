#include<stdio.h>
#include"polynomialog.h"
void main()
{
struct node *create();
void display();
struct node *add();
struct node *head1=NULL,*head2=NULL,*head3=NULL;
printf("enter the first polynomial list\n");
head1=create(head1);
printf("enter the secound polynomial\n");
head2=create(head2);
printf("\nfirst polynomial\n");
display(head1);
printf(" \nthe secound polynomiial\n");
display(head2);
head3=add(head1,head2,head3);
printf(" \nthe addition of polynomiial\n");
display(head3);
}
