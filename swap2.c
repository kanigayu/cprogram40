#include<stdio.h>
void swap(int ,int );
void main()
{
int n,k;
scanf("%d\t%d",&n,&k);
printf("\n before swapping:%d\t%d ",n,k);
swap(n,k);
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("\nAfter swapping: %d\t%d",x,y);
}
