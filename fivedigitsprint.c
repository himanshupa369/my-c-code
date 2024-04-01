#include<stdio.h>
int main()
{
    int n,i,j,rev=0,d,digits;
    printf("enter five digit number\n");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    while(rev>0)
    {
        digits=rev%10;
        rev=rev/10;
        printf("\n%d",digits);
    }
    return 0;
}