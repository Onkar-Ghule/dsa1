#include<stdio.h>
void insertion(int a[],int n);
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
insertion(a,n);
printf("sorted   array element\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void insertion(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while((j>=0)&&(a[j]>temp))
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
}
