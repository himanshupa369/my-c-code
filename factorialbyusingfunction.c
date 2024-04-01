#include<stdio.h>
int main()
{
    int n,f;
    int fac(int n);
    printf("enter the value of n\n");
    scanf("%d",&n);
    f=fac(n);
    printf("factorial=%d",f);
    return 0;
}
int fac(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return (n*fac(n-1));
    }
}