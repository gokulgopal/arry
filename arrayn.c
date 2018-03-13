#include<stdio.h>
void main()
{
int n,temp,i,j,c[20];
printf("enter the array of numbers");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
}
for(i=0;i<=n;i++)
{
    printf("%d",c[i]);
}
}
