#include<stdio.h>
void bubblesort(int a[],int n);
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
bubblesort(a,n);
printf("sorted   array element\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void bubblesort(int a[],int n)
{
int temp,i,pass,flag;
for(pass=0;pass<n-1;pass++)
{
flag=0;
for(i=0;i<n-pass-1;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
flag=1;
}
}
if(flag==0)
break;
}
}

