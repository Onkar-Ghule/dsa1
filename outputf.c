#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
FILE *fp=NULL;
fp=fopen("abc.txt","r");
if(fp==NULL)
{
printf("not exit");
}
fgets(a,10,fp);
printf("%s",a);
fclose(fp);
}
