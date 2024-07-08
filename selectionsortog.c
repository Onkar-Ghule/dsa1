#include<stdio.h>
void selectionsort(int a[],int n);
void main()
{
int i,n,a[10];
printf("enter how many values ");
scanf("%d",&n);
printf("enter the array element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
selectionsort(a,n);
printf("sorted   array element\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void selectionsort(int a[],int n)
{
int min,temp,i,j;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
if(min!=i)
{
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
}
}

