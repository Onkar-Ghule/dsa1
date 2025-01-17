#include<stdio.h>
void mergesort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub)
{
    int k,b[10],i,j;
    i=lb;
    j=mid+1;
    k=lb;
    while((i<=mid)&&(j<=ub))
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    a[k]=b[k];
}
void mergesort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);
int main()
{
    int a[10],i,n;
    printf("\nHow many values:");
    scanf("%d",&n);
    printf("\nEnter actual values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("\nThe sorted values are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
