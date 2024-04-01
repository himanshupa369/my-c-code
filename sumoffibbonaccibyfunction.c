#include<stdio.h>
int main()
{
    int n,i,sum=0;
    int fib(int n);
    printf("\n enter the number of term n in fibbonacci series\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+fib(i);
    }
    printf("sum of the series=%d",sum);
    return 0;
}
int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}