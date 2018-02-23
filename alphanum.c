#include<stdio.h>
int main()
{
char a[50]="hello.123";
int i;
if(a[i]>='a' && a[i]<='z' || a[i]>='1' && a[i]<='9')
printf("yes");
else
printf("No");
return 0;
}
