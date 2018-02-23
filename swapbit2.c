#include<stdio.h>
int main()
{
int a,b;
scanf("%d\t%d",&a,&b);
printf("\n before swapping%d\t%d ",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\nAfter swapping %d\t%d",a,b);
return 0;
}
