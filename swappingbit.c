#include<stdio.h>
int main()
{
int x,y;
scanf("%d\t%d",&x,&y);
printf("\n before swapping%d\t%d ",x,y);
x=x^y;
y=x^y;
x=x^y;
printf("\nAfter swapping %d\t%d",x,y);
return 0;
}
