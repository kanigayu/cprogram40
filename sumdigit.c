#include<stdio.h>
int main()
{
int n,i,a[10],sum=0,avg;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
return 0;
}
