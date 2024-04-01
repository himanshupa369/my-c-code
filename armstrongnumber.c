#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,n1,d,i,s=0;
    printf("enter the number n\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        n=n%10;
        c++;
    }
    while(n1>0)
    {
        d=n1%10;
        s=s+pow(d,c);
        n1=n1/10;
    }
    if(n==s)
    {
    printf("\n the given number is armstrong number\n");
    }
    else
    {
     printf("\n given number is not a armstrong number\n");
    }
    return 0;
}
