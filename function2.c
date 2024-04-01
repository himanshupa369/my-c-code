#include<stdio.h>
int fac(int n);
int main()
{
    int n,f;
    printf("enter the value of n\n");
    scanf("%d",&n);
f=fac(n);
printf("factorial=%d",f);
}
int fac(int n)
{
    int fc=1,i;
for(i=1;i<=n;i++)
{
    fc=fc*i;
}
return fc;
}