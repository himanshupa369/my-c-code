#include<stdio.h>
int main()
{
    int n,n1,r,rev=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(n1==rev)
    {
    printf(" palindrom number");
    }
    else 
    {
        printf(" not palindrom number");
    }
    return 0;
}