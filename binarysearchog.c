#include<stdio.h>
int binarySearch(int a[],int n,int key);
void bubblesort(int a[],int n);
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
while(top<=bottom)
{
mid=(top+bottom)/2;
if(key==a[mid])
return mid;
else if(key<a[mid])
bottom=mid-1;
else if(key>a[mid])
top=mid+1;
else 
k=-1;
} 	
return k;
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

