#include<stdio.h>
void countingsort(int a[10],int n,int k);
void main()
{
int i,n,a[10],k=0;
printf("enter the no of element");
scanf("%d",&n);
printf("enter actual  vallue");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>k)
k=a[i];
}
countingsort(a,n,k);
printf("\n sorted elements are");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
void countingsort(int a[10],int n,int k)
{
int i,count[k],b[n];
for(i=0;i<=k;i++)
count[i]=0;
for(i=0;i<n;i++)
count[a[i]]++;
for(i=1;i<=k;i++)
count[i]=count[i]+count[i-1];
for(i=n-1;i>=0;i--)
b[--count[a[i]]]=a[i];
for(i=0;i<n;i++)
a[i]=b[i];
}
