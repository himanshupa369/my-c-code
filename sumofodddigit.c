#include<stdio.h>
int main()
{
    int n,s;
    int sumd(int n);
    printf("enter the value of n\n");
    scanf("%d",&n);
    s=sumd(n);
    printf("sum of odd digits=%d",s);
    return 0;
}
int sumd(int n)
{
    int i,j,t=0;
    while(n>0)
    {
        j=n%10;
        if(j%2!=0)
        t=t+j;
        n=n/10;
    }
    return t;
}