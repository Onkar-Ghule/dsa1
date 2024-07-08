#include<stdio.h>
int binarySearch(int a[],int top, int bottom,int key)
{
int mid,k;
if(top<bottom)
{
mid=(top+bottom)/2;
if(key==a[mid])
return mid;
else
if(key<a[mid])
return binarySearch(a,top,mid-1,key);
else
if(key>a[mid])
return binarySearch(a,mid+1,bottom,key);
}
return -1;
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
void main()
{
int temp,i,n,pass,flag,key,a[10];
printf("enter how many values ");
scanf("%d",&n);
printf("enter the array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubblesort(a,n);
printf("enter the element to be searched");
scanf("%d",&key);
flag=binarySearch(a,0,n,key);
if(flag==-1)
printf("not found");
else
printf("element is found at %d",flag);
}

