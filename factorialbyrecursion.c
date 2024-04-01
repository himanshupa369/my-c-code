#include<stdio.h>
int main()
{
    int n,f;
int fact(int n);
printf("enter the value of n\n");
scanf("%d",&n);
f=fact(n);
printf("factorial=%d",f);
return 0;
}
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}