#include<stdio.h>
int binarySearch(int a[],int n,int key);
void main()
{
int temp,i,n,pass,flag,key,a[10];
printf("enter how many values ");
scanf("%d",&n);
printf("enter the array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to be searched");
scanf("%d",&key);
flag=binarySearch(a,n,key);
if(flag==-1)
printf("not found");
else
printf("element is found at %d",flag);
}
int binarySearch(int a[],int n,int key)
{
int top,bottom,mid,i,k;
top=0;
bottom=n-1;
mid=(top+bottom)/2;
while(top<=bottom)
{
if(key==a[mid])
return mid;
else if(key<a[mid])
bottom=mid-1;
else if(key>a[mid])
top=mid+1;
else k=-1;
}
return k;
}
