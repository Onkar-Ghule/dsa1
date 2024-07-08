 #include<stdio.h>
int partition(int a[],int lb,int ub);
void quicksort(int a[],int lb,int ub);
void main()
{
int i,n,a[10];
printf("enter how many values ");
scanf("%d",&n);
printf("enter the array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("sorted   array element\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
int partition(int a[],int lb,int ub)
{
int pivot,start,end,temp;
pivot=a[lb];
start=lb;
end=ub;
while(start<end)
{
while(a[start]<=pivot)
start++;
while(a[end]>pivot)
end--;
if(start<end)
{
temp=a[start];
a[start]=a[end];
a[end]=temp;
}
}
temp=a[lb];
a[lb]=a[end];
a[end]=temp;
return end;
}
void quicksort(int a[],int lb,int ub)
{
int loc;
if(lb<ub)
{
loc=partition(a,lb,ub);
quicksort(a,lb,loc-1);
quicksort(a,loc+1,ub);
}
}
