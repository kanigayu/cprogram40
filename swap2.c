#include<stdio.h>
void swap(int ,int );
void main()
{
int x,y;
scanf("%d\t%d",&x,&y);
printf("\n before swapping:%d\t%d ",x,y);
swap(x,y);
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("\nAfter swapping: %d\t%d",a,b);
}
