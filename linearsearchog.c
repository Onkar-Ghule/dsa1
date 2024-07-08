#include<stdio.h>
void linearsearch(int a[],int n);
void main()
{
int temp,i,n,pass,flag,a[10];
printf("enter how many values ");
scanf("%d",&n);
printf("enter the array element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
linearsearch(a,n);
}
void linearsearch(int a[10],int n)
{
int key,i,flag=0;
printf("enter the element to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("value is found");
flag=1;
}
}
if(flag==0)
printf("not found");
}

